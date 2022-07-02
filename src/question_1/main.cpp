#include <iostream>
#include "question1.h"

using std :: cout;
using std :: cin;
using std :: endl;

int main()
{
    double sales;
    char again;
    do{
    cout << "Enter Sales Amount: ";
    cin >> sales;
    double sales_payment;

    sales_payment = get_sales_commission(sales) ;
    cout << "Sales Payment is " << sales_payment <<endl;
    cout << "Do you want to continue? (Y/N) " <<endl;
        cin >> again;
    }while (again != 'N');

    return 0;
}