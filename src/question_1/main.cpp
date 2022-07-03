#include <iostream>
#include "question1.h"

using std :: cout;
using std :: cin;
using std :: endl;

int main()
{
    double sales;
    char again;
    double sales_payment;
    do{
      cout << "Enter Sales Amount: ";
      cin >> sales;
    
      while (sales<0 ) 
		  {
			  cout << "\nInvalid option. Please Try Again.\n"; 
			  cout << "\nNumber needs to be greater than 0 "<<endl;
        cout <<"Enter Sales Amount:"<<endl;
        cin  >> sales;
		} 

    sales_payment = get_sales_commission(sales) ;
    cout << "Sales Payment is " << sales_payment <<endl;
    cout << "Do you want to continue? (Y/N) " <<endl;
    cin >> again;
    }while (again != 'N');

    

}

