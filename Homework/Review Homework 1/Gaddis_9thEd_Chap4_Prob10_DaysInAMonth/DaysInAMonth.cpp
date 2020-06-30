#include <cstdlib>
#include <iostream>
using namespace std;
int main ()
{
    int month, year;
    float remainder, remainder2, remainder3;
    
    cout <<"Enter a month (1-12): ";
    cin >> month;
    cout <<"Enter a year: ";
    cin >> year;
    
    if (month == 2)
    {
        remainder = year % 100;
        if (remainder == 0)
        {
            remainder2 = year % 400;
            if (remainder2 == 0)
            {
                cout <<"29 Days";
                goto kill;
            }           
            else
            {               
                cout <<"28 Days";
                goto kill;
            }
        }
        else
        {
            remainder3 = year % 4;
            if (remainder3 == 0)
            {
                cout <<"29 Days";
                goto kill;
            }  
            else
            {
                cout <<"28 Days";
                goto kill;
            }
        }
    }
    else
    {
        switch(month)
        {
            case 1 : cout <<"31 Days";
            break;
            case 3 : cout <<"31 Days";
            break;
            case 4 : cout <<"30 Days";
            break;
            case 5 : cout <<"31 Days";
            break;
            case 6 : cout <<"30 Days";
            break;
            case 7 : cout <<"31 Days";
            break;
            case 8 : cout <<"31 Days";
            break;
            case 9 : cout <<"30 Days";
            break;
            case 10 : cout <<"31 Days";
            break;
            case 11 : cout <<"30 Days";
            break;
            case 12 : cout <<"31 Days";
            default : cout <<"Not a valid Month.";
        }
    }
    kill:    
    return 0;
}
