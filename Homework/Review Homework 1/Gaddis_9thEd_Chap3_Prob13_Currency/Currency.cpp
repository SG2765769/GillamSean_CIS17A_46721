#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
    const double YEN_PER_DOLLAR = 98.93;
    const double EUROS_PER_DOLLAR = 0.74;
    double dollar, yen, euro;
    cout << "Please input the dollar amount to be converted: ";
    cin >> dollar;
    yen = dollar*YEN_PER_DOLLAR;
    euro = dollar*EUROS_PER_DOLLAR;
    cout << "Yen: " << fixed << showpoint << setprecision(2) << yen << endl;
    cout << "Euro: " << fixed << showpoint << setprecision(2) << euro;
    return 0;
}

