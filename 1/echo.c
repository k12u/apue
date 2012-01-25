#include "ourhdr.h"

#define BUFFSIZE 8192

int main(void) {
  int n;
  char buf[BUFFSIZE];

  while ( ( n = read(STDIN_FILENO, buf, BUFFSIZE)) > 0)
    if(write(STDOUT_FILENO, buf, n) != n)
      printf("write error");

  if(n < 0)
    printf("read error");

  exit(0);
}
