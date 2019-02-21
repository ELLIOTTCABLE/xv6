#include "types.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  uint count;

  printf(0, "initial: %d\n", traps());

  for (count = 0; count < 1000; count++) {
    printf(0, ".");
  }
  printf(0, "after 1,000 printf() calls: %d\n", traps());

  exit();
}

