#include <stdio.h>
#include "moduleA.h"
#include <ctype.ctype.h>

int main (void){
 
	char txt[7]={'1', ' ', 'M', 'o', 'R', 'e', '?'};
  for(int i=0; i<7; ++i)
  {
    if(isdigit(txt[i]))
    {
      printf("<%c>", txt[i]);          // <1>
    }
  }
  for(int i=0; i<7; ++i)
  {
    if(ispunct(txt[i]))
    {
      printf("<%c>", txt[i]);          // <?>
    }
  }
  for(int i=0; i<7; ++i)
  {
    if(isupper(txt[i]))
    {
      printf("<%c>", tolower(txt[i])); // <m><r>
    }
  


	return 0;
}