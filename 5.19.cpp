#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double s, p=0, w=0;
    
    cout << "P\t" << "Row Euler" << endl;
        /*for (int i = 2; i < 500000; i++)
    {
        s=s+(1/(pow(i,2)));
        p=pow((s*6),0.5);
        if (p==3.14159)
        {
            cout << p << "\t" << i << endl;
        }
          
    }*/

    for (double i = 1; i < 100000; i=i+4)
    {
        
        p=p+((4/i));
        w++;
        cout << p << "\t" << w << endl;
        p=p-(4/(i+2));
        w++;
        cout << p << "\t" << w << endl;
    }
      
}