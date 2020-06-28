#include <stdio.h>
#include "module_A.h"



void
doSomething(Tag tag,
            int depth)
{
  indent(tag, depth); printf("entering doSomething()\n");
  indent(tag, depth); printf("...working hard...\n");
  indent(tag, depth); printf("leaving doSomething()\n");
}