#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    
    for (int b = 1, c=4; b <=9; b=b+2, c=c-1)
    {
        for (int a = 1; a <= c; a++)
            {
                cout << " ";
            }

        for (int i = 1; i <= b ; i++)
        {               
            cout << "*" ;
        }

        cout << endl;
            
    }

    int b = 7, c=1;

    while (c!=5)
    {
        for (int a = 1; a <= c; a++)
            {
                cout << " ";
            }
            
        for (int i = 1; i <= b ; i++)
        {               
            cout << "*" ;
        }

        cout << endl;

        b=b-2;
        c=c+1;
            
    }
           
}