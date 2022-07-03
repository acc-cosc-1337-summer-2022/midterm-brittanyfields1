#include <iostream>
#include "question4.h"

using std :: cout;
using std :: cin;
using std :: endl;

int main()
{
    double sold;
    double points;
    char again;
    do{
    cout << "Enter Widgets Sold: ";
    cin >> sold;
    input_validation(sold)
    while (sold < 0)
        {
			cout << "\nInvalid option. Please Try Again.\n"; 
			cout << "\nNumber needs to be greater than 0 "<<endl;
            cout << "Enter Enter Widgets Sold: ";
            cin >> sold;
		} 

    points = get_earned_points(sold);
    cout << "Points Earned: " << points<<endl;
    cout << "Do you want to continue? (Y/N)"<<endl;
    cin >> again;
    }while (again != 'N');

    return 0;
}