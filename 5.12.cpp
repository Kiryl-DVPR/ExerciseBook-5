#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        
        for (int b = 0; b <= i; b++)
            {
            cout << "*";
            }

        for (int c = 10; c >= i; c--)
            {
            cout << " ";
            }

        for (int d = 10; d >= i; d--)
            {
            cout << "*";
            }
        
        cout <<"\n";
    }
    
}