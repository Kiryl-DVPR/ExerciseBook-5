#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int amount;
    int principal = 1000;
    double rate = 0.05;

    cout << "Year" << setw( 21 ) << "Amount on deposit" << endl;

    for ( int year = 1; year <= 10; year++ )
    {
        amount = principal * pow( 1.0 + rate, year )*100;
        cout << setw( 4 ) << year << setw( 10 )  << amount/100 << " $ " << amount%100 << " cent" << endl;
    }
}