#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    int col, number, sum=0;

    cin >> col;

    for (int i = 0; i != col; i++)
    {
        cin >> number;

        sum = sum + number;
    
    }

    cout << endl << sum;

}