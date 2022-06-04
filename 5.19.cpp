#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double s=1, p;
    
    cout << "P\t" << "Row Euler" << endl;
        for (int i = 2; i < 100; i++)
    {
        s=s+(1/(pow(i,2)));
        p=pow((s*6),0.5);
        cout << p << "\t" << i << endl;
    }
     
}