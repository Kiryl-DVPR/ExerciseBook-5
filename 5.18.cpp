#include <iostream>
using namespace std;

int main()
{ 
    for (int i = 0; i <= 256; i++)
    {
         cout << i << "\t" ; 

        int a,b,d;

         for (int s=1; s <= 512; s=s*2) // Для нахождения двоичного веса
         {
            a=i/s;

            if(a>=1 && a<2)
            {
             b=s; // Присваиваем двоичный вес S к переменной b, для работы вне цикла
            }

         } 
        
        if(i>0)
        {
            cout << i/b;

            while (b!=1) // Преобразуем в двоичную систему счисления
            {
                d=i%b;
                b=b/2;
                cout << d/b;
            }

        }else
        cout << 0;
        

        cout << endl;

        
        
    }
    
    
}