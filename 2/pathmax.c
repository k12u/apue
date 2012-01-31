#include <errno.h>
#include <unistd.h>
#include <stdlib.h>
#include <error.h>
#include <stdio.h>
#include <limits.h>

#ifdef PATH_MAX
static int pathmax = PATH_MAX;
#else
static int pathmax = 0;
#endif

#define PATH_MAX_GUESS 1024

char *
path_alloc(int *size)
{
  char *ptr;

  if(pathmax == 0) {
    errno = 0;
    if ( ( pathmax = pathconf("/", _PC_PATH_MAX)) < 0 ){
      if(errno == 0)
	pathmax = PATH_MAX_GUESS;
      else {
	printf("pathconf error for _PC_PATH_MAX\n");
	exit(1);
      }
    } else 
      pathmax++;
  }
  if ( ( ptr = malloc(pathmax + 1)) == NULL) {
    printf("malloc error for pathname\n");
    exit(1);
  }
  
  if(size != NULL)
    *size = pathmax + 1;
  return(ptr);
}

int
main(void)
{
    int  path_max_size;
    char *ptr;
    
    ptr = path_alloc(&path_max_size);
    printf("PATH_MAX = %d\n", path_max_size);
    free(ptr);
    exit(0);
}
