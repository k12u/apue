#include <sys/types.h>
#include <dirent.h>
#include <error.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
  DIR  *dp;
  struct dirent *dirp;

  if (argc!= 2)
    err_quit("a single argument (the directory name) is required");

  if( (dp = opendir(argv[1]))  == NULL)
    err_sys("can7t open%", argv[1]);

  while((dirp = readdir(dp)) != NULL)
    printf("%s\n", dirp->d_name);

  closedir(dp);
  exit(0);
}
