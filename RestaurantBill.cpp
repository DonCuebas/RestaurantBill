// Name: Don-Omar Cuebas
// Date: 8/26/22
// Program Title: RestaurantBill
// Program Description: This program calculates the total food bill with tip and tax.

#include <iostream>
#include <string>


using namespace std;

// Named constants
const double TAX_PERCENT = 0.095; 

int main()
{

	// Variable declaration
	double foodBill;
	double tip;
	double tax;
	double totalBill;
	
	//Program title and description for the user
	cout << "Program Title: RestaurantBill" << endl;
	cout << "This program calculates the total food bill with tip and tax." << endl;
	cout << endl; 

	// User input
	cout << "What is your food bill? (excluding the tax and tip)" << endl;
	cin >> foodBill;
	cout << endl; 
	cout << "Choose your tip: " << endl;

	cout << "For 10% tip : $" << 0.1 * foodBill << endl;
	cout << "For 15% tip : $" << 0.15 * foodBill << endl;
	cout << "For 20% tip : $" << 0.2 * foodBill << endl;

	cin >> tip; 
	cout << endl; 
	
	// Calculations
	tax = foodBill * TAX_PERCENT;
    totalBill = foodBill + tip + tax;

	// Output to the screen
	cout << "Your food bill is $" << foodBill << endl;
	cout << "Tip...............$" << tip << endl;
	cout << "Tax...............$" << tax << endl;
	cout << "Your total bill is $" << totalBill << endl;
	cout << endl;
	cout << "Thank you!" << endl;

	return 0;
}