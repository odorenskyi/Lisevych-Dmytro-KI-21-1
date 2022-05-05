#ifndef MODULESLISEVYCH_H_INCLUDED
#define MODULESLISEVYCH_H_INCLUDED

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double s_calculation(float x, float z);

string windSpeed(int wSpeed);
int temp_cel(int day1, int day2, int day3, int day4, int day5, int day6, int day7);
int temp_far(float cel);
int bits_number(int number);

void checkFile(string outputFileName, string inputFileName);
bool inputTxtFile(string inputFileName, string inputText);
bool infoBlock(string outputFileName);
string language(string outputFileName, string text);
string article62(string inputFileName);
bool timeInFile(string inputFileName);
double sCalculationInFile(string outputFileName, float x, float z);
bool numberBinFile(string outputFileName, int b);
int howManySymbols(string outputFileName, string inputTextInFile);

#endif // MODULESLISEVYCH_H_INCLUDED
