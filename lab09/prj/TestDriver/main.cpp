#include <iostream>

#include "ModulesLisevych.h"

using namespace std;

int main()
{
    system("chcp 65001 & cls");
    //Task 9.1
    int windSpeedValue [5] = {0, 5, 15, 25, 35};
    char wSpeedResult [5][255] = { "Бал Бофорта: 0", "Бал Бофорта: 3", "Бал Бофорта: 7", "Бал Бофорта: 10", "Бал Бофорта: 12"};

    cout << "Test-Suite 9.1" << endl;
    for(int i = 0; i <5; i++){
        cout << "Test Case #" << i + 1 << "\n"
                "Wind Speed: " << windSpeedValue[i] << "\n";
        cout << "Expected Result: " << wSpeedResult[i] << endl;
        cout << "Actual Result: " << windSpeed(windSpeedValue[i]) << endl;
        if(windSpeed(windSpeedValue[i]) == wSpeedResult[i]){
            cout << "Test case #" << i + 1 << " PASSED\n" << endl;
        } else {
            cout << "Test case #" << i + 1 << " FAILED\n" << endl;
        }
    }

    //Task 9.2
    int day1 [5] = {10, 5, 10, 25, 3};
    int day2 [5] = {11, 7, 14, 20, 5};
    int day3 [5] = {12, 9, 18, 23, 3};
    int day4 [5] = {13, 7, 20, 24, 7};
    int day5 [5] = {14, 5, 17, 19, 10};
    int day6 [5] = {15, 3, 15, 15, 11};
    int day7 [5] = {16, 5, 17, 17, 9};
    int celResult [5] = {13, 5, 15, 20, 6};
    float farResult [5] = {55, 41, 59, 68, 42};

    cout << "Test-Suite 9.2.1" << endl;
    for(int i = 0; i < 5; i++){
        cout << "Test Case #" << i + 1 << "\n";
        cout << "Expected Result(Celsium): " << celResult[i] << endl;
        cout << "Actual Result(Celsium): " << temp_cel(day1[i], day2[i], day3[i], day4[i], day5[i], day6[i], day7[i]) << endl;
        if(temp_cel(day1[i], day2[i], day3[i], day4[i], day5[i], day6[i], day7[i]) == celResult[i]){
            cout << "Test case #" << i + 1 << " PASSED\n" << endl;
        } else {
            cout << "Test case #" << i + 1 << " FAILED\n" << endl;
        }
    }

        cout << "Test-Suite 9.2.2" << endl;
    for(int i = 0; i < 5; i++){
        cout << "Test Case #" << i + 1 << "\n";
        cout << "Expected Result(Fahrenheit): " << farResult[i] << endl;
        cout << "Actual Result(Fahrenheit): " << temp_far(celResult[i]) << endl;
        if(temp_far(celResult[i] == farResult[i])){
            cout << "Test case #" << i + 1 << " PASSED\n" << endl;
        } else {
            cout << "Test case #" << i + 1 << " FAILED\n" << endl;
        }
    }

    //Task 9.3
    int number [5] = {34, 52085, 798534, 4258050, 5335662};
    int numberResult [5] = {2, 10, 10, 8, 12};

    cout << "Test task 9.3" << endl;
    for(int i = 0; i < 5; i++){
        cout << "Test-Suite #" << i + 1 << endl;
        cout << "Expected Result: " << numberResult[i] << endl;
        cout << "Actual Result: " << bits_number(number[i]) << endl;
        if(bits_number(number[i]) == numberResult[i]){
            cout << "Test case #" << i + 1 << " PASSED\n" << endl;
        } else {
            cout << "Test case #" << i + 1 << " FAILED\n" << endl;
        }
    }
}
