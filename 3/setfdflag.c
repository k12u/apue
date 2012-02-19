#include <stdlib.h>
#include <fcntl.h>
#include <stdlib.h>

void
set_fl(int fd, int flags)
{
  int val;

  if( (val = fcntl(fd, F_GETFL, 0)) < 0)
    perror("fcntl F_GETFL error");

  val |= flags;

  if (fcntl(fd, F_SETFL, val) < 0)
    perror("fcntl F_SETFL error");
}

int
main(void){
  
  exit(0);
}
