#include <stdio.h>
#include "pile.h"
#include <stdlib.h>
#include <stdbool.h>


void enume(unsigned long *pile,unsigned long nombre_elem, unsigned long limit){
	for(int i=0;i<(int)limit;i++){
		
		printf("%ld\n",pile[i]);
	}
}






void test(unsigned long prime_count)
{
	unsigned long *pile=(unsigned long *)malloc((size_t)prime_count*sizeof(unsigned long));
	if(!pile){
		abort();
		printf("aborting\n");
	}
	populate(pile,prime_count);	//(unsigned long)sizeof(pile)/sizeof(unsigned long)


	enume(pile,prime_count, 100);

	free(pile);
}









int main(int argc, char **argv){

	
	test(1000);

	return 0;
}