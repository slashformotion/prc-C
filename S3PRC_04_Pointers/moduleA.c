#include <stdio.h>
#include "moduleA.h"

void
integrate(double *inout_x, // deux passages par adresse, c'est-à-dire par pointeur
          double *inout_v,
          double a,        // deux passages par valeur
          double dt)
{
  double x=*inout_x, v=*inout_v; // acquisition de ce qui est désigné par les pointeurs
  x+=(v+0.5*a*dt)*dt; // calculs sur des variables locales
  v+=a*dt;
  if(x<0.0)
  {
    x=0.0;
  }
  *inout_x=x;  // altération de ce qui est désigné par les pointeurs
  *inout_v=v;
}



double *
chooseBest(double *p1,
           double *p2,
           double *p3,
           double *p4)
{
  if(*p1<*p2)
  {
    return *p1<*p3 ? (*p1<*p4 ? p1 : p4) : (*p3<*p4 ? p3 : p4);
  }
  else
  {
    return *p2<*p3 ? (*p2<*p4 ? p2 : p4) : (*p3<*p4 ? p3 : p4);
  }
}