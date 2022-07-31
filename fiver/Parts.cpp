#include "CarService.h"

Parts::Parts()
{
	address = "";
	phone = "";
	for (int i = 0; i < 100; i++)
		parts[i] = "";
	price = 200;
}
void Parts::disParts()
{
	system("CLS");
	char choice;
	int i = 0;
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t         Parts of the car         " << " |" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t        Enter the following        " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t      So we can Send that to you   " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t         Enter please              " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t       Address of the Home         " << "|" << endl;
	cout << "\t\t\t\t\t\t           "; cin >> address;
	cout << "\t\t\t\t\t" << "|" << " \t       Your phone number           " << "|" << endl;
	cout << "\t\t\t\t\t\t           "; cin >> phone;
	do
	{
		cout << "\t\t\t\t\t" << "|" << " \t       Enter the part you need " << "|" << endl;
		cout << "\t\t\t\t\t\t           "; cin >> parts[i];
		cout << "\t\t\t\t\t" << "|" << " \t       Wanna Add more(Y/N)     " << "|" << endl;
		cout << "\t\t\t\t\t\t           "; cin >> choice;
		i++;
	} while (choice == 'y' || choice == 'Y');
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
		cout << "\t\t\t\t\t" << "|" << " \t        Your Ordered Parts         " << "|" << endl;
		for (int j = 0; j < i; j++)
		{
			cout << "\t\t\t\t\t" << "|" << " \t             " << j + 1 << ":" << parts[i] << "                    " << "|" << endl;
		}
		cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
		cout << "\t\t\t\t\t--------------------------------------------" << endl;
	}
	if (choice == 'N' || choice == 'n')
		exit(0);
	else
		cout << "Soryy , Invali choice  " << endl;
}


