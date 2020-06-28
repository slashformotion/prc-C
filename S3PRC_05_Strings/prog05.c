#include <ctype.h>
#include <stdio.h>
#include "moduleA.h"
#include <string.h>


int main(int argc, char **argv){

	for (int i=0; i<argc;i++){
		printf("%s\n", argv[i]);

	}

	
 

  char test[]="jesuisuntest", *pointer;
  pointer = strrchr(test, 's');
  if(pointer && isalpha(*pointer)){
  	*pointer = (char)toupper(*pointer);
  }
  printf("%s\n", test);






  char txt[]="Hello, ENIB!";
  char *split=txt+1;
  for(char *p=txt; p<=split; p++)
  {
    *p=(char)toupper(*p);           // passer les cinq premières lettres en majuscule
  }
  *(split++)='\0';                  // marquer la fin juste après puis avancer
  printf("<%s><%s>\n", txt, split);





  long tableau[]={0,1,2,3,4,5,6,7,8,9};
  nothing(tableau,sizeof(tableau)/sizeof(long), 4);





	return 0;
}