#include "module.h"
#include <math.h>
#include <stdio.h>

void rien(void){}
void
RealArray_display(const double *values,
                  int count,
                  double minValue,
                  double maxValue)
{
  double valueRange=maxValue-minValue;
  int first=8, last=70, range=last-first+1;
  int zero=first+(int)round(range*(-minValue)/valueRange);
  for(int i=0; i<count; ++i)
  {
    double value=values[i];
    int step=first+(int)round(range*(value-minValue)/valueRange);
    char symbol=step>zero ? '>' : step<zero ? '<' : 'X';
    for(int s=0; s<=78; ++s)
    {
      char c=' ';
      if(step==s)
      {
        c=symbol;
      }
      else if(s==zero)
      {
        c='|';
      }
      else if(((step<=s)&&(s<=zero))||((zero<=s)&&(s<=step)))
      {
        c='~';
      }
      fputc(c, stdout);
    }
    fputc('\n', stdout);
  }
}