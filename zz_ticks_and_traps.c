#include "types.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  int t, u;
  ticks();

  t = traps();

  printf(0, "initial: %d\n", t);
  t = traps();

  printf(0, "after printf(): %d\n", t);

  t = traps();
  uptime();
  u = traps();

  printf(0, "before / after uptime(): %d/%d\n", t, u);

  exit();
}
