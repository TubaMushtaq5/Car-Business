#include "CarService.h"
Rent::Rent()
{
	total = 1;
	pri1 = 10;
	day = 0;
	year = 0;
	month = 0;
	date = 0;
	pri2 = 15;
	car1 = "KIA sporatge  Model 2020  New ";
	car2 = "KIA Seranto   Model 2022  New ";
}
void Rent::rDisplay()
{
	system("CLS");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t         RENT A CAR               " << " |" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t       Select The Car              " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t 1: " << car1 << " " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t 2: " << car2 << " " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t 0: Exit                           " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t\t\t  \t  Enter your Choice !             " << endl;
	cout << "\t\t\t\t\t\t           "; cin >> choice;
	if (choice == '0')
		exit(0);
	if (choice == '1')
	{

		cout << "\t\t\t\t\t  \t One day rent :  " << pri1 << "           " << endl << endl;
		cout << "\t\t\t\t\t  \t  For How much days you WAnna Rent " << endl;
		cout << "\t\t\t\t\t\t           "; cin >> day;
		total = pri1 * day;
		cout << "\t\t\t\t\t  \t  Enter date to confirm the CAr    " << endl;
		cout << "\t\t\t\t\t\t     Date:      "; cin >> date;
		cout << "\t\t\t\t\t\t     Month:      "; cin >> month;
		cout << "\t\t\t\t\t\t     Year:      "; cin >> year;
	}
	else
	{
		cout << "\t\t\t\t\t  \t One day rent :  " << pri2 << "           " << endl << endl;
		cout << "\t\t\t\t\t  \t  For How much days you WAnna Rent " << endl;
		cout << "\t\t\t\t\t\t           "; cin >> day;
		total = pri2 * day;
		cout << "\t\t\t\t\t  \t  Enter date to confirm the CAr    " << endl;
		cout << "\t\t\t\t\t\t     Date:      "; cin >> date;
		cout << "\t\t\t\t\t\t     Month:      "; cin >> month;
		cout << "\t\t\t\t\t\t     Year:      "; cin >> year;
	}
}
void Rent::infoR()
{
	system("CLS");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t         Congratulations!         " << " |" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t  Your car is confirmed for Rent   " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t    Here is your information       " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	if (choice == '1')
	{
		cout << "\t\t\t\t\t" << "|" << " \t 1: " << car1 << " " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t        Date OF rent               " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t             " << date << "                     " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t        Month OF rent              " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t             " << month << "                     " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t        Year OF rent               " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t             " << year << "                     " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t        Rented for below days      " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t             " << day << "                     " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t            Rent                   " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t             " << total << "                    " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t      Visit Our Office             " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t    1: With your ID card           " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t    2: Confirmation Messege        " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
		cout << "\t\t\t\t\t--------------------------------------------" << endl;
	}
	else
	{
		cout << "\t\t\t\t\t" << "|" << " \t     2: " << car2 << "                 " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t        Date OF rent                   " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t       " << date << "                  " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t        Month OF rent                  " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t       " << month << "                 " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t        Year OF rent                   " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t       " << year << "                  " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t        Rented for below days          " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t       " << day << "                   " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t                                       " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t                                       " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t          Visit Our Office             " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t           1: With your ID card        " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t           2: Confirmation Messege     " << "|" << endl;
		cout << "\t\t\t\t\t" << "|" << " \t                                       " << "|" << endl;
		cout << "\t\t\t\t\t--------------------------------------------" << endl;
	}
}
