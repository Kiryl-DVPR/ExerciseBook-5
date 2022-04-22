#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    int i, col, number, number1, min;

    cin >> col; // Вводим кол-во далее вводимых чисел чисел

    for (i = 0; i != col; i++) // Цикл для вводимых чисел 
    {
        cin >> number;

        if (i==0)
        {
            min = number;
        };

         if (i>=1)
        {
            if (number < min)
            {
                min = number;
            } 
        
        };

    }

    cout << endl << min;
    
}