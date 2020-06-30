#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
    double numOrg, numDaysMulti;
    double dailyPerIncOrg;
    do
    {
        cout << "What is the starting number of the Organism?: ";
        cin >> numOrg;
        if(numOrg < 2)
            cout << "Invalid Input. Must be greater than 2." << endl;
    }while(numOrg < 2);
    do
    {
        cout << "what is the percent increase of the organism daily?: ";
        cin >> dailyPerIncOrg;
        if(dailyPerIncOrg < 0)
            cout << "Invalid Input. Must be greater than 0." << endl;
    }while(dailyPerIncOrg < 0);
    do
    {
        cout << "What is the number of days that the organism will multiply?: ";
        cin >> numDaysMulti;
        if(numDaysMulti < 1)
            cout << "Invalid Input. Must be greater than 1." << endl;
    }while(numDaysMulti < 1);
    for(int i; i < numDaysMulti; i++)
    {
        numOrg = numOrg + (numOrg * (dailyPerIncOrg/100));
    }
    cout << "After " << numDaysMulti << " the organism will have a population of "
            << fixed << setprecision(0) << numOrg;
    return 0;
}

