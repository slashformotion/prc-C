#include "struct.h"
#include <stdlib.h>

int
main(void)
{
    Mem test;
    Mem_init(&test);
    Mem_append(&test,1);
    
    Mem_show(&test);
    Mem_append(&test,2);
    Mem_show(&test);
    Mem_append(&test,3);
    Mem_show(&test);
    Mem_append(&test,4);
    Mem_show(&test);
    Mem_destroy(&test);

  return 0;
}