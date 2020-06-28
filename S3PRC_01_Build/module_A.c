#include <stdio.h>
#include "module_A.h"



void
indent(Tag tag, int depth)
{
  while(depth!=0)
  {
    printf("%s", tag); // affichage de ce nouveau paramètre
    depth=depth-1;
  }
}