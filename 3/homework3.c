#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

extern int errno;

int main(void)
{
  int fd;
  
  if ( (fd = open ("/dev/fd/7", O_WRONLY)) < 0)
    printf("open error: %i\n", errno);
  else{
    if(write(fd, "hoge", 4) < 0){
      printf("write error\n");
    }
    else {
      printf("written\n");
    }
  }
}

    

  
