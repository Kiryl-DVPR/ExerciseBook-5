#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int x, y;

    cin >> x >> y;
    if (!(x>5) && !(y>=7))
    {
        cout << "Right";
    };

    cin >> x >> y;
    if (!(x>5 && y>=7))
    {
        cout << "Right";
    };
    
}