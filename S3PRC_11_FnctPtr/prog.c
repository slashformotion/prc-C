#include "module.h"
#include <stdio.h>
#include <math.h>



int main(void){
    double (*fonction)(double)=cos; 
    printf("intégration de la fonction mathématique de %lf à %lf : %lf", 0.0,5.0,Integrate_math(0.0,5.0,10000, fonction));
    return 0;
}