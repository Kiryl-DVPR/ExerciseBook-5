#include <iostream>
#include <iomanip>
using namespace std;


int main()
{   
    int n, factarial;

    cout << "Number\t!n\n" ;

    for (int n = 1; n <= 5; n++)
    {
        int i=1;
        int z=1;

        while (n>i)
        {
            z = z * (n-i);
            i++;
        }

        factarial = n * z;

        cout << setw(3) << right << n << "\t" << factarial << endl;
        
    }
    
}