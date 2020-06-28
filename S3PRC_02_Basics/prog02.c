
#include <stdio.h>




int main(void)
{
  
  int value, v1=10, v2=20, v3=30, v4=40;
  value=++v1;                            // pré-incrémentation, équivalent à v1+=1; puis value=v1;
  printf("v1=%d value=%d\n", v1, value); // v1=11 value=11
  value=--v2;                            // pré-décrémentation, équivalent à v2-=1; puis value=v2;
  printf("v2=%d value=%d\n", v2, value); // v2=19 value=19
  value=v3++;                            // post-incrémentation, équivalent à value=v3; puis v3+=1;
  printf("v3=%d value=%d\n", v3, value); // v3=31 value=30
  value=v4--;                            // post-décrémentation, équivalent à value=v4; puis v4-=1;
  printf("v4=%d value=%d\n", v4, value);

  return 0;
}