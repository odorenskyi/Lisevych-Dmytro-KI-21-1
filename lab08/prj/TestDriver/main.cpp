#include <iostream>
#include <conio.h>
#include <iomanip>
#include <clocale>

#include "ModulesLisevych.h"

using namespace std;

int main()
{
    system("chcp 65001 & cls");
    float x[5] = {1, 3, 5, 7, 1};
    float z[5] = {2, 5, 3, 7, 1};

    double Result[5] = {3.01129, 23.12387, -524.44301, 9937.12941, 0.111529};
    double delta = 0.0005;

    for(int i = 0; i < 5; i++){
        cout << "Test Case #" << i + 1 << "\n"
        "X = " << x[i] << "\n"
        "Z = " << z[i] << "\n";
        cout << "Expexted Result: " << Result[i] << endl;
        cout << "Actual Result: " << s_calculation(x[i], z[i]) << endl;
        if(abs(s_calculation(x[i], z[i]) - Result[i]) <= delta){
            cout << "Test Case #" << i + 1 << ":" << " PASSED\n" << endl;
        } else {
            cout << "Test Case #" << i + 1 << ":" << " FAILED\n" << endl;
        }
    }
    system("pause");
    return 0;
}
