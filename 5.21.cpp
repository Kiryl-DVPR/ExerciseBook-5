#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int code;
    int o; //Оклад
    int wHour; //Рабочие часы для кода 2
    int hRate; //Рабочие часы для кода 2
    int amountWS; //сумма недельных продаж кода 3
    int amountSP; // Кол-во проданной продукции;
    int productR; // Ставка еденицы продукции;
    
    
    while(code!=0)
    {
    cout << "Enter code agent or 0 for quit (1, 2, 3, 4):";
    cin >> code;
    
    switch (code)
    {
        case 1:
        cout << "Enter a weekly salary ($): ";
        cin >> o;
        cout << "Salary:" << (o) << endl;
        break;

        case 2:
        cout << "Enter working hours(p.m.): ";
        cin >> wHour;
        cout << "Enter hourly rate($): ";
        cin >> hRate;
        if (wHour>40)
        {
            cout << "Salary:" << ((40*hRate)+((wHour-40)*(1.5*hRate))) << endl;
        } else
        {
            cout << "Salary:" << (wHour*hRate) << endl;
        };
        break;

        case 3:
        cout << "Amount weekly sale($): ";
        cin >> amountWS;
        cout << "Salary($):" << (amountWS*0.057+250) << endl;
        break;

        case 4:
        cout << "Enter number of products sold: ";
        cin >> amountSP;
        cout << "Enter a product rate ($): ";
        cin >> productR;
        cout << "Salary($):" << (productR*amountSP) << endl;
        break;

        default:
        break;
    }
    }

}