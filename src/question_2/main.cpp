#include <iostream>
#include "question2.h"

using std :: cout;
using std :: cin;
using std :: endl;

int main()
{
    double celsius;
    double fahrenheit;
    char again = 'N';
    do{
    cout << "Enter Celsius Degrees: ";
    cin >> celsius;
    fahrenheit = get_fahrenheit(celsius);
    cout << "Fahrenheit Degrees: " << fahrenheit<<endl;
    cout << "Do you want to continue? (Y/N)"<<endl;
    cin >> again;
    }while (again != 'N');

    return 0;
}
