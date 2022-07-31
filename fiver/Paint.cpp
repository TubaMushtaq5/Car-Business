#include "CarService.h"
void Paint::dPaint()
{
	system("CLS");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t          Paint A CAR             " << " |" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t        Enter the following        " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t      So we can Make the time      " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t         Enter please              " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t       Color of the car            " << "|" << endl;
	cout << "\t\t\t\t\t\t           "; cin >> clr;
	cout << "\t\t\t\t\t" << "|" << " \t       Model of the car            " << "|" << endl;
	cout << "\t\t\t\t\t\t           "; cin >> mdl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
}
void Paint::cnf()
{
	system("CLS");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t         Congratulations!         " << " |" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t Your Driver is confirmed for Rent " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t    Here is your information       " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t        Color of the car           " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t             " << clr << "                  " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t        model of the car           " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t             " << mdl << "                    " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t        Date You can visit         " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t              4 Pm Tomorrow        " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
}
