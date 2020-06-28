#include "module.h"
#include "integration.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


void test_maths(void){
    double x=3.14/4;
    printf("cos(%lf)=%lf\n", x, cos(x));
    double test[5] = {1.1,2.2,4.4,3.3,5.5};
    RealArray_display(test, 5,2.3, 4.6);
}


void
test_rand(void)
{
    printf("\n~~~~ %s() ~~~~\n", __func__);
    int count=1000;
    int result=0;
    double value;
    for(int i=0; i<count; i++)
    {
        value = rand()%10;
        printf("%lf    ",value);
        if (value<4){
            result+=1;
        }
    }
    printf("on a %d/%d chiffres corespondant au critère\n",result,count);
}

void test_integration(void){
    printf("\n~~~~ %s() ~~~~\n", __func__);
    double xMin = 1.1, xMax = 3.3;
    int stepCount= 1000;
    printf("Integrate_math(sqrt) in [%g;%g] --> %g\n",
         xMin, xMax, Integrate_math(xMin, xMax, stepCount, sqrt));
    printf("Integrate_math(log) in [%g;%g] --> %g\n",
         xMin, xMax, Integrate_math(xMin, xMax, stepCount, log));


}

int main(void){
    srand((unsigned int)time(NULL));
        
    test_maths();
    test_rand();
    test_integration();

    return 0;
}