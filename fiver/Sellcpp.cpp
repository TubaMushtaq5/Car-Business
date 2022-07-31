#include "CarService.h"

Sell::Sell()
{
	name = "";
	model = "";
	price = 0;
	address = "";
	condition = "";
	phone = "";
}
void Sell::getInfo()
{
	system("CLS");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t      SELL A CAR                   " << " |" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t  Enter the Folllowing             " << " |" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t       Information                 " << " |" << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t\t\t       Enter the Name of your car(WITHOUT SPACES)  " << endl << endl;
	cout << "\t\t\t\t\t\t           "; cin >> name;
	cout << "\t\t\t\t\t       Enter the MODEl of your car(WITHOUT SPACES)  " << endl << endl;
	cout << "\t\t\t\t\t\t           "; cin >> model;
	cout << "\t\t\t\t\t     Enter the Price of your car(WITHOUT SPACES)  " << endl << endl;
	cout << "\t\t\t\t\t\t           "; cin >> price;
	cout << "\t\t\t\t\t      Enter the Condition your car(WITHOUT SPACES)  " << endl << endl;
	cout << "\t\t\t\t\t\t           "; cin >> condition;
	cout << "\t\t\t\t\t      Enter Your phone number (WITHOUT SPACES)  " << endl << endl;
	cout << "\t\t\t\t\t\t           "; cin >> phone;
	cout << "\t\t\t\t\t      Enter Your address to reach you (WITHOUT SPACES)  " << endl << endl;
	cout << "\t\t\t\t\t\t           "; cin >> address;
}
void Sell::sell()
{
	system("CLS");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t         Congratulatins!          " << " |" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t       Your Car is Uploaded        " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t          On our Website           " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t       With following details      " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t          Name                     " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t             " << name << "                  " << "" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t          Model                    " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t             " << model << "                     " << "" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t          price                    " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t             " << price << "                     " << "" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t          condition                " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t             " << condition << "                     " << "" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t          phone                    " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t             " << phone << "                    " << "" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t          Address                  " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t             " << address << "                    " << "" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t Thanks for using our Website      " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t  Customer will reach you soon     " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
}

