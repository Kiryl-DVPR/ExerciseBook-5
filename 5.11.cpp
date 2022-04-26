#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main()
{
    double amount;
    double principal = 1000.0;

    cout << "Year" << setw( 21 ) << "Amount on deposit" << endl;

    cout << fixed << setprecision(2);

    for (double rate = 0.05; rate <= 0.10; rate=rate+0.01)
    {
        cout << "Interest rate : " << rate*100 << "%" << endl;;
    
        for ( int year = 1; year <= 10; year++)
        {
            amount = principal * pow( 1.0 + rate, year );
            cout << setw(4) << year << setw(21) << amount << endl;
        }

    }
}