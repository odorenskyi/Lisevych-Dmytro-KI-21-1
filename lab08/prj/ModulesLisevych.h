#ifndef MODULESLISEVYCH_H_INCLUDED
#define MODULESLISEVYCH_H_INCLUDED

#include <cmath>
double s_calculation(double x, double z)
{
    double S;
    S = ((1/2)*pow((abs(2*z - pow(x, 2))/sin(x)), 3))/(sqrt(1+abs(cos(x)))+2*3,14);
    return S;
}

#endif // MODULESLISEVYCH_H_INCLUDED
