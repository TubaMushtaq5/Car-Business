#include "CarService.h"

Call::Call()
{
	address = "";
	phone = "";
	date = 0;
}
void Call::disCall()
{
	system("CLS");
	char choice;
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t          Call  A Mechanic        " << " |" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t        Enter the following        " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t      So we can Send him to you    " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t         Enter please              " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t       Address of the Home            " << "|" << endl;
	cout << "\t\t\t\t\t\t           "; cin >> address;
	cout << "\t\t\t\t\t" << "|" << " \t       Your phone number           " << "|" << endl;
	cout << "\t\t\t\t\t\t           "; cin >> phone;
	cout << "\t\t\t\t\t" << "|" << " \t       Date to Repair             " << "|" << endl;
	cout << "\t\t\t\t\t\t           "; cin >> date;
	cout << "\t\t\t\t\t" << "|" << " \t       Shall we confirm(Y/N)       " << "|" << endl;
	cout << "\t\t\t\t\t\t           "; cin >> choice;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
	if (choice == 'y' || choice == 'Y')
	{
		system("CLS");
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << "\t\t\t\t\t--------------------------------------------" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t         Congratulations!         " << " |" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t Your Mechanic is confirmed        " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t    Here is your information       " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t       Address of the home         " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t             " << address << "                  " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t        Your phone number          " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t             " << phone << "                    " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t        Your date                  " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t             " << date << "                    " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
		cout << "\t\t\t\t\t--------------------------------------------" << endl;
	}
	if (choice == 'n' || choice == 'N')
		exit(0);
	else
	{
		cout << "SOrry , Inavlid input" << endl;
	}
}
