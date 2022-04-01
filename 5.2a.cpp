#include <iostream>
using namespace std;

int main()
{
    int sum=0;

    for (int count = 1; count<=99; count+=2)
    {
        sum=sum+count;
    }

    cout << sum;
    
}