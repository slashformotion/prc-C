#include <stdio.h>
#include "module_A.h"
#include "module_B.h"






int
main(void)
{
  indent("* ", 1); printf("entering main()\n");
  doSomething("| ", 2);
  indent("* ", 1); printf("leaving main()\n");
  return 0;
}


