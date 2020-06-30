#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
    double f, c;
    cout << "Please input temp in Celsius: ";
    cin >> c;
    f = 1.8*c+32;
    cout << "Degrees C: " << c << endl;
    cout << "Degrees F: " << f;
    return 0;
}

