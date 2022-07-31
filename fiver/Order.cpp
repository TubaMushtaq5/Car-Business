#include "CarService.h"
Order::Order()
{
	name = "";
	model = "";
	price = 2000;
}
void Order::displayOrder()
{
	char ans;
	system("CLS");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t           Order A Car            " << " |" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t     Please give the Following     " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t             Details               " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t\t\t       Enter the Name of Car You Order(WITHOUT SPACES)  " << endl << endl;
	cout << "\t\t\t\t\t\t           "; cin >> name;
	cout << "\t\t\t\t\t       Enter the MODEl of Car you Order(WITHOUT SPACES)  " << endl << endl;
	cout << "\t\t\t\t\t\t           "; cin >> model;
	cout << "\t\t\t\t\t     Here is the Price of the car(WITHOUT SPACES)  " << endl << endl;
	cout << "\t\t\t\t\t\t           "; cout << price << "$" << endl;
	cout << "\t\t\t\t\t              Shall we confirm your order(Y/N)           " << endl << endl;
	cout << "\t\t\t\t\t\t           "; cin >> ans;
	if (ans == 'n' || ans == 'N')
		exit(0);
}
void Order::res()
{
	system("CLS");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t         Congratulatins!          " << " |" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t       Your Car is Ordered         " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t          On our Website           " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t       With following details      " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t          Name                     " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t             " << name << "                  " << "" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t          Model                    " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t             " << model << "                     " << "" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t          price                    " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t             " << price << "                     " << "" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t Thanks for using our Website      " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t  Customer will reach you soon     " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
}
