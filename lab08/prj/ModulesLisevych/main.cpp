#include <iostream>
#include <cmath>
#include "ModulesLisevych.h"

using namespace std;

double s_calculation(float x, float z)
{
    const double PI = 3.14159;
    return (0.5*pow((abs(2*z - pow(x, 2))/sin(x)), 3))/(sqrt(1+abs(cos(x)))+2*PI);
}
