#include <stdio.h>
#include <float.h>
#include "typeProperties.h"

void
realLimits(float step)
{
  printf("\n~~~~ realAccumulation(%g) ~~~~\n", step);
  printf("FLT_MIN = %g\n", FLT_MIN);
  printf("FLT_MAX = %g\n", FLT_MAX);
  printf("DBL_MIN = %g\n", DBL_MIN);
  printf("DBL_MAX = %g\n", DBL_MAX);

  float accum=0.0f;
  for(int i=0; ; ++i)
  {
    float prev=accum;
    accum+=step;
    if(prev==accum)
    {
      printf("stalled after %d steps (%g)\n", i, accum);
      break;
    }
  }
}

