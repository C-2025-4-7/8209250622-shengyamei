#include <iostream>
#include <iomanip> 
void mytemperature();
using namespace std;

int main() 
{
    cout << fixed << setprecision(2);
    cout << "Celsius    Fahrenheit   |   Fahrenheit     Celsius" << endl;
    double cel = 40.0;
    double fah = 120.0;
    while (cel >= 31.0) {
        cout << cel << "\t" << cel << "\t\t|   ";
        cout<<fah << "\t\t" << fah<< endl;
        cel--;
        fah -= 10;
    }
    return 0;
}