#include <iostream>
using namespace std;

int main()
{   
    int number;

    cout << "Enter with space 5 number ( 1.. 30): " << endl;

    for (int i = 1; i <= 5; i++)
    {
        cin >> number;
        for (int i = 1; i <= number; i++)
        {
            cout << "*";
        }
        cout << endl;
        
    }
    
}