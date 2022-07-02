#include <iostream>
#include "question4.h"

using std :: cout;
using std :: cin;
using std :: endl;

int main()
{
    double sold;
    char again;
    do{
    cout << "Enter Widgets Sold: ";
    cin >> sold;
        double points;

        points = get_earned_points(sold);
        cout << "Points Earned: " << points<<endl;
        cout << "Do you want to continue? (Y/N)"<<endl;
        cin >> again;
    }while (again != 'N');

    return 0;
}