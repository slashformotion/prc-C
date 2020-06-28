#ifndef MODULE_H
#define MODULE_H


double
Integrate_math(double xMin,
               double xMax,
               int stepCount,
               double (*fnct)(double));

#endif