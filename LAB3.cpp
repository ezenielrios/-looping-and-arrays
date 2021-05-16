//-----------------------------------------------------------------------//
//CIS170C
//Ezeniel Rios
//3/19/2021
// looping and arrays to store sales for seven different types of salsa
//----------------------------------------------------------------------//
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	// Constant for the salsa types
	const int NUM_TYPES = 7;

	// Array of salsa types
	string salsa[NUM_TYPES] = { " mild"," medium"," hot" ," sweet"," fruit"," verde"," zesty" };

	// Array of salesd of each salsa type
	int sales[NUM_TYPES];

	// Total number of jars sold
	int totalJarsSold = 0;

	// Subscript of the salsa that sold the most
	int hiSalesProduct = 0;

	// Subscript of the salsa that so;d the least
	int loSalesProduct = 0;

	// Get the number of jars sold of each type of salsa
	for (int i = 0; i < NUM_TYPES; i++)
	{
		// Get the number of jars sold
		cout << "Jars sold last month of" << salsa[i] << ": ";
		cin >> sales[i];

		// Validate the input
		while (sales[i] < 0)
		{
			cout << "Jars sold must be 0 or more. "
				<< "Please re-enter: ";
			cin >> sales[i];
		}
	}

	// Get total sales and high and low selling products
	for (int i = 0; i < NUM_TYPES; i++)
	{
		totalJarsSold += sales[i];
		if (sales[i] > sales[hiSalesProduct])
			hiSalesProduct = i;
		if (sales[i] < sales[loSalesProduct])
			loSalesProduct = i;
	}

	// Display the sales report header
	cout << endl << endl;
	cout << " Salsa Sales Report \n\n";
	cout << " Name Jars Sold \n";
	cout << "___________________\n";

	// Display the name and jars sold of each type
	for (int i = 0; i < NUM_TYPES; i++)
	{
		cout << salsa[i]
			<< ": " << sales[i]
			<< endl;
	}

	// Display the total sales, highest seller, and lowest seller
	cout << "\nTotal Sales:" << totalJarsSold << endl;
	cout << "High Seller: " << salsa[hiSalesProduct] << endl;
	cout << "Low Seller: " << salsa[loSalesProduct] << endl;
	system("pause");
	return 0;
}
