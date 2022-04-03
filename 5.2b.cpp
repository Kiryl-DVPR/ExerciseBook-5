#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    double number=333.546372;

    cout << setw(15) << left << fixed << setprecision(1) << number;
    cout << setw(15) << left << fixed << setprecision(2) << number;
    cout << setw(15) << left << fixed << setprecision(3) << number;
}