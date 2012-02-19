#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <fcntl.h>

char buf1[] = "abcdefghij";
char buf2[] = "ABCDEFGHIJ";

#define FILE_MODE (S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)

int
main(void)
{
  int fd;
  if( (fd = creat("file.hole", FILE_MODE)) < 0)
    perror("creat error");

  if (write(fd, buf1, 10) != 10)
    perror("buf1 write error");

  if(lseek(fd, 9*1024*1024, SEEK_SET) == -1)
    perror("lseek error");

  if (write(fd, buf2, 10) != 10)
    perror("buf2 write error");

  exit(0);
}
