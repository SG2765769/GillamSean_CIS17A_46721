#include <iostream>
using namespace std;
int main() {
    double x1, x2, x3, x4, x5;
    double average;
    cin >> x1 >> x2 >> x3 >> x4 >> x5;
    average = (x1 + x2 + x3 + x4 + x5) / 5.0;
    cout << "Input 5 numbers." << endl;
    cout << "The average is " << average;
    return 0;
}