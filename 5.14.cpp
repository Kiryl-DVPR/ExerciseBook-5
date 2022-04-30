#include <iostream>
#include <iomanip>
using namespace std;

int main()
{   
    int number;
    int col;
    double prod;
    double sum;
    int i=1;

    cout << "Enter a product(First number - product number, second number - number of product): ";

    while (i != 6)
    {
        
    cin >> number >> col;

        switch (number)
        {
            case 1:
         prod = col * 2.98 ;
            break;

            case 2:
            prod = col * 4.50;
            break;

            case 3:
            prod = col * 9.98;
            break;

            case 4:
            prod = col * 4.49;
            break;

            case 5:
            prod = col * 6.87;
            break;

        }   

    sum = sum + prod;
    i++;

    }

    cout << "Quantity sold per week: " << fixed << setprecision(2) << sum << "$";
}