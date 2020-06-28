#include "module.h"
#include <math.h>

double
Integrate_math(double xMin,
               double xMax,
               int stepCount,
               double (*fnct)(double))
{
  double dx=(xMax-xMin)/stepCount, sum=0.0, x=xMin+0.5*dx;
  for(int i=0; i<stepCount; ++i, x+=dx)
  {
    double value=fnct(x);
    if(isfinite(value))
    {
      sum+=value;
    }
  }
  return dx*sum;
}