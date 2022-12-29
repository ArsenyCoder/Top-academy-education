#include <iostream>
using namespace std;

int month_days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

int is_visokos(int year) {

    return year / 4;

}

int func(int days1,int month1,int year1, int days2,int month2,int year2) {
    int days_1 = days1;

    for (int i = 0; i < month1; i++) {
        days_1 += month_days[i];
    }

    days_1 += (366 * is_visokos(year1) + (365 * (year1 - is_visokos(year1))));


    int days_2 = days2;

    for (int i = 0; i < month2; i++) {
        days_2 += month_days[i];
    }

    days_2 += (366 * is_visokos(year2) + (365 * (year2 - is_visokos(year2))));

    return days_1 - days_2;
}


void main()
{


    int days1 = 5;
    int month1 = 6;
    int year1 = 2023;

    

    int days2 = 4;
    int month2 = 6;
    int year2 = 2020;


    cout << func(days1, month1, year1, days2, month2, year2);

    
}