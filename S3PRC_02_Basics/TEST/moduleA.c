#include "moduleB.h"
#include "moduleA.h"
#include <stdio.h>



void compte(int entree)
{
	for (int i=1; i<=entree; i++)
	{
		printf("%d \n", foisDeux(i));
	}
}