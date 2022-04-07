#include <iostream>
#include <clocale>
#include <cmath>
#include <string>
#include <bitset>

#include "ModulesLisevych.h"

using namespace std;

double s_calculation(float x, float z)
{
    const double PI = 3.14159;
    return (0.5*pow((abs(2*z - pow(x, 2))/sin(x)), 3))/(sqrt(1+abs(cos(x)))+2*PI);
}

string windSpeed(int wSpeed)
{
    if(wSpeed < 0.3){
        return "Бал Бофорта: 0";
    }
    if(wSpeed >= 0.3 && wSpeed <= 1.5){
        return "Бал Бофорта: 1";
    }
    if(wSpeed >= 1.6 && wSpeed <= 3.4){
        return "Бал Бофорта: 2";
    }
    if(wSpeed >= 3.5 && wSpeed <= 5.4 ){
        return "Бал Бофорта: 3";
    }
    if(wSpeed >= 5.5 && wSpeed <= 7.9){
        return "Бал Бофорта: 4";
    }
    if(wSpeed >= 8 && wSpeed <= 10.7){
        return "Бал Бофорта: 5";
    }
    if(wSpeed >= 10.8 && wSpeed <= 13.8){
        return "Бал Бофорта: 6";
    }
    if(wSpeed >= 13.9 && wSpeed <= 17.1){
        return "Бал Бофорта: 7";
    }
    if(wSpeed >= 17.2 && wSpeed <= 20.7){
        return "Бал Бофорта: 8";
    }
    if(wSpeed >= 20.8 && wSpeed <= 24.4){
        return "Бал Бофорта: 9";
    }
    if(wSpeed >= 24.5 && wSpeed <= 28.4){
        return "Бал Бофорта: 10";
    }
    if(wSpeed >= 28.5 && wSpeed <= 32.6){
        return "Бал Бофорта: 11";
    }
    if(wSpeed >= 32.7){
        return "Бал Бофорта: 12";
    }
}

int temp_cel(int day1, int day2, int day3, int day4, int day5, int day6, int day7)
{
    int cel = (day1 + day2 + day3 + day4 + day5 + day6 + day7) / 7;
    return cel;
}

int temp_far(float cel)
{
    int far;
    far = 32 + 1.8 * cel;
    return far;
}

int bits_number(int number)
{
    bitset<32> b_number{number};
    if (b_number[7]) {
        return 32 - b_number.count();
    }
    return b_number.count();
}
