#include "CarService.h"

Hire::Hire()
{
	choice = '\0';
	driv1 = "Watson";
	driv2 = "John";
	ren1 = 20;
	ren2 = 30;
	date = 0;
}
void Hire::displayHire()
{
	system("CLS");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t          Hire a driver !         " << " |" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t       Here are the details        " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t           of Our Drivers          " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t         Drivers Available         " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t       1." << driv1 << "                    " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t     His Per day Rent              " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t       2." << ren1 << "                    " << " | " << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t       2." << driv2 << "          " << " | " << endl;
	cout << "\t\t\t\t\t" << "|" << " \t    His Per day Rent               " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t       2." << ren2 << "           " << " | " << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t       Enter your choice           " << "|" << endl;
	cout << "\t\t\t\t\t\t           "; cin >> choice;
	cout << "\t\t\t\t\t" << "|" << " \t       Enter your Date           " << "|" << endl;
	cout << "\t\t\t\t\t\t           "; cin >> date;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
	if (choice == '1')
	{
		system("CLS");
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "\t\t\t\t\t--------------------------------------------" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t         Congratulations!         " << " |" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t Your Driver is confirmed for Rent " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t    Here is your information       " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t        Name of Driver             " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t             " << driv1 << "                  " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t        His Daily rent             " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t             " << ren1 << "                    " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t        Date of rent               " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t             " << date << "                     " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
		cout << "\t\t\t\t\t--------------------------------------------" << endl;
	}
	else if (choice == '2')
	{
		system("CLS");
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "\t\t\t\t\t--------------------------------------------" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t         Congratulations!         " << " |" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t Your Driver is confirmed for Rent " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t    Here is your information       " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t        Name of Driver             " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t             " << driv2 << "                  " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t        His Daily rent             " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t             " << ren2 << "                    " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t        Date of rent               " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t             " << date << "                     " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
		cout << "\t\t\t\t\t--------------------------------------------" << endl;
	}
	else
	{
		cout << "Invalid command " << endl;
	}
}
