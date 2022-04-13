#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    double number=333.546372;

    cout << setw(15) << left << fixed << setprecision(1) << number;
    cout << setw(15) << left << fixed << setprecision(2) << number;
    cout << setw(15) << left << fixed << setprecision(3) << number;


    cout << endl << setw(10) << right <<fixed << setprecision(2) << pow(2.5,3) << endl;

    int x=1;

    while (x<=20)

    {   
      
      if (x%5==0)
      {
          cout << x << endl;
      } else
      {
          cout << x << "\t";
      }
      

        x++;
    }

    
    for ( int i = 1; i <= 20; i++)
    {
        
        if (i%5==0)
      {
          cout << i << endl;
      } else
      {
          cout << i << "\t";
      }

    }
    
    
}