#include <iostream>
#include <conio.h>

#include "ModulesLisevych.h"

using namespace std;

int main()
{
    system("chcp 65001 & cls");

    float x, z;
    int wSpeed;
    int day1, day2, day3, day4, day5, day6, day7;
    int number;

    while(true){
        cout << "Введіть символ (q | e | r | t | Y | y | H): " << endl;
        switch(getch()){
            case 'q': cout << "Введіть значення x: " << endl;
                      cin >> x;
                      cout << "Введіть значення z: " << endl;
                      cin >> z;
                      cout << "S = " << s_calculation(x, z) << endl;
                      break;
            case 'e': cout << "Введіть швидкість вітру: " << endl;
                      cin >> wSpeed;
                      cout << windSpeed(wSpeed) << endl;
                      break;
            case 'r': cout << "Введіть температуру за понеділок: " << endl;
                      cin >> day1;
                      cout << "Введіть температуру за вівторок: " << endl;
                      cin >> day2;
                      cout << "Введіть температуру за середу: " << endl;
                      cin >> day3;
                      cout << "Введіть температуру за четвер: " << endl;
                      cin >> day4;
                      cout << "Введіть температуру за п'ятницю: " << endl;
                      cin >> day5;
                      cout << "Введіть температуру за суботу: " << endl;
                      cin >> day6;
                      cout << "Введіть температуру за неділю: " << endl;
                      cin >> day7;
                      cout << temp_cel(day1, day2, day3, day4, day5, day6, day7) << " - (Цельсій)" << endl;
                      cout << temp_far(temp_cel(day1, day2, day3, day4, day5, day6, day7)) << " - (Фаренгейт)" << endl;
                      break;
            case 't': cout << "Введіть значення: " << endl;
                      cin >> number;
                      cout << bits_number(number) << endl;
                      break;
            case 'Y': return 0; break;
            case 'y': return 0; break;
            case 'H': return 0; break;
            default: cout << "\a" << endl; continue;
            }
    }
}
