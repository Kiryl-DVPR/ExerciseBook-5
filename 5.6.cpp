#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    double sqr;
    int i=0;
    int number=0;
    double sum=0;

    /*while (number!=9999)
    {
        sum=sum + number;
        i++;
        cin >> number;   
    }
    sqr=sum/(i-1);
cout << endl << sqr ;*/

do
{
    sum=sum + number;
    i++;
    cin >> number;

} while (number!=9999);

    sqr=sum/(i-1);
    cout << endl << fixed << setprecision(2) << sqr ;

}