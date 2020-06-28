#include "moduleA.h"
#include <stdio.h>

void nothing(long *tableau, long nombre_elems, long seuil){

	for(long i=0; i<nombre_elems; i++){

		if (tableau[i]<seuil){
			printf("la valeur %ld est inférieur au seuil\n", i+1);



		}
	}
}