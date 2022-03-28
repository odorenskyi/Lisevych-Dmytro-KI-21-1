#include <iostream>
#include <clocale>
#include <cmath>
#include <string>
#include <bitset>

using namespace std;

double s_calculation(float x, float z)
{
    const double PI = 3.14159;
    return (0.5*pow((abs(2*z - pow(x, 2))/sin(x)), 3))/(sqrt(1+abs(cos(x)))+2*PI);
}

string windSpeed(unsigned int wSpeed)
{
    if(wSpeed < 0.3){
        cout << "Бал бофорта: 0" << endl;
    }
    if(wSpeed >= 0.3 && wSpeed <= 1.5){
        cout << "Бал бофорта: 1" << endl;
    }
    if(wSpeed >= 1.6 && wSpeed <= 3.4){
        cout << "Бал бофорта: 2" << endl;
    }
    if(wSpeed >= 3.5 && wSpeed <= 5.4 ){
        cout << "Бал бофорта: 3" << endl;
    }
    if(wSpeed >= 5.5 && wSpeed <= 7.9){
        cout << "Бал бофорта: 4" << endl;
    }
    if(wSpeed >= 8 && wSpeed <= 10.7){
        cout << "Бал бофорта: 5" << endl;
    }
    if(wSpeed >= 10.8 && wSpeed <= 13.8){
        cout << "Бал бофорта: 6" << endl;
    }
    if(wSpeed >= 13.9 && wSpeed <= 17.1){
        cout << "Бал бофорта: 7" << endl;
    }
    if(wSpeed >= 17.2 && wSpeed <= 20.7){
        cout << "Бал бофорта: 8" << endl;
    }
    if(wSpeed >= 20.8 && wSpeed <= 24.4){
        cout << "Бал бофорта: 9" << endl;
    }
    if(wSpeed >= 24.5 && wSpeed <= 28.4){
        cout << "Бал бофорта: 10" << endl;
    }
    if(wSpeed >= 28.5 && wSpeed <= 32.6){
        cout << "Бал бофорта: 11" << endl;
    }
    if(wSpeed >= 32.7){
        cout << "Бал бофорта: 12" << endl;
    }
}

int temperature(double temp[7])
{
    float sum, cel, far;
    for(int i = 0; i < 7; i++){
        sum += temp[7];
    }
    cel = sum / 7;
    far = 32 + 1.8 * cel;
}

int bits_number(unsigned int number)
{
    bitset<31> b_number{number};
    if (b_number[7]) {
        return 32 - b_number.count();
    }
    return b_number.count();
}
