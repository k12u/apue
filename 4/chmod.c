#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>

int
main(void)
{
  struct stat statbuf;

  if (stat("foo", &statbuf) < 0)
    perror("stat error for foo");
  if (chmod("foo", (statbuf.st_mode & ~S_IXGRP) | S_ISGID) < 0)
    perror("chmod error for foo");

  if(chmod("bar", S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH) < 0)
    perror("chmod error for bar");

  exit(0);
}

