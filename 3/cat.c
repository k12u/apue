#include <unistd.h>
#include <stdlib.h>

#define BUFFSIZE 8192

int
main(void)
{
  int n;
  char buf[BUFFSIZE];

  while( (n = read(STDIN_FILENO, buf, BUFFSIZE)) > 0)
    if(write(STDOUT_FILENO, buf, n) != n)
      perror("write error");

  if(n < 0)
    perror("read error");

  exit(0);
}
