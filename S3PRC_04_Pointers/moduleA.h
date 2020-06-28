#ifndef MODULEA_H
#define MODULEA_H

void
integrate(double *inout_x, // deux passages par adresse, c'est-à-dire par pointeur
          double *inout_v,
          double a,        // deux passages par valeur
          double dt);

double *
chooseBest(double *p1,
           double *p2,
           double *p3,
           double *p4);

#endif