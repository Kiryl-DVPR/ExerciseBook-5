#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
int i=1, n, b, sum=0;

cout << " Enter number: " << endl;
cin >> n;

while (i<=n)
{   
    cin >> b;
    sum=sum+b;
    i++;
}
cout << sum;

}