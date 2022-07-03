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
        while (mass<0) 
		{
			cout << "\nInvalid option. Please Try Again.\n"; 
			cout << "\nNumber needs to be greater than 0 "<<endl;
            cout << "Enter Object's Mass in Kilograms: ";
            cin >> mass;
		} 
        
        cout << "Enter Object's velocity in meters per second: ";
        cin >> velocity; 
        while (velocity<0) 
		{
			cout << "\nInvalid option. Please Try Again.\n"; 
			cout << "\nNumber needs to be greater than 0 "<<endl;
            cout << "Enter Object's velocity in meters per second: ";
            cin >> velocity;
		} 
        
        kinetic_energy = get_kinetic_energy(mass, velocity);
        cout << "The Kinetic Energy is " << kinetic_energy<<endl;
        cout << "Do you want to continue? (Y/N)"<<endl;
        cin >> again;
    }while (again != 'N');

    return 0;
    }


