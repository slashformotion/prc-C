#include <stdio.h>
#include "moduleA.h"
#include "myUtils.h"
#include "typeProperties.h"
#include <stdint.h>



void test_saturateTwice(void){
	printf("~~~test_saturateTwice~~~\n");
	printf("On voudrait saturer le type short mais dans la fonction saturateTwice on a mis une sécurité\n");

	unsigned int c=2;
	unsigned long d=2;
	
	while(d==c){
		d=d*2;
		c = saturateTwice(c);
		printf("%d %ld\n", c,d);
	}

	printf("on a a débordé avec c = %d, et d = %ld \n", c,d);
}

int main(void) 
{

  ///compte(4);

  //test_saturateTwice();
	realLimits(512.0f);

	printf("sizeof(int) = %ld\n", sizeof(int8_t));


  

  return 0; 
}