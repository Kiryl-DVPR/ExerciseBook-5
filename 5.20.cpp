#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int  a1, b1, c1;
    
    for (int c = 1; c <=500; c++)
    {
        c1=pow(c,2);
        
        for (int a = 1; a <= 500; a++)
        {
            a1=pow(a,2);

            for (int b = 1; b <= 500; b++)
            {
                b1=pow(b,2);
                if (c1==(b1+a1))
                {
                    cout << a << " "<< b << " " << c << endl;
                }
                
            }
            
        }
           
    }
        
    
}