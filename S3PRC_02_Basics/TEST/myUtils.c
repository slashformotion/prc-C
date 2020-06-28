#include <stdio.h>
#include "myUtils.h"

unsigned int saturateTwice(unsigned int c){
    unsigned long valeur = c;
    
    if (valeur*2>65535){
        return (unsigned short)65535;
    }
    else{
        return 2*c;
    }
}


