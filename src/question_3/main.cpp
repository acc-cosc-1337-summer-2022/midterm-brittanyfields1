#include<iostream>
#include "question3.h"

using std :: cout;
using std :: cin;
using std :: endl;

int main()
    {
    double mass;
    double velocity;
    double kinetic_energy;
    char again;
    do{
        cout << "Enter Object's Mass in Kilograms: ";
        cin >> mass;
        cout << "Enter Object's velocity in meters per second: ";
        cin >> velocity;

        kinetic_energy = get_kinetic_energy(mass, velocity);
        cout << "The Kinetic Energy is " << kinetic_energy;
        cout << "Do you want to continue? (Y/N)";
        cin >> again;
    }while (again != 'N');

    return 0;
    }


