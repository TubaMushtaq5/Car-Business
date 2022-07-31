#include "CarService.h"

void CarService:: display()
{
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t          WElCOME!                " << " |" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t       To Car Serive               " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t    Our Services Include           " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t       1. Rent a car               " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t       2. Sell a car               " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t       3. Order a car              " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t       4. Hire a driver            " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t       5. Wash a car               " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t       6. Repairing                " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t       7. Call a Mechanic          " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t       8. Car Parts                " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t       9. Car service              " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t      10. Paint a car              " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t       0. Exit                     " << "|" << endl;
	cout << "\t\t\t\t\t" << "|" << " \t                                   " << "|" << endl;
	cout << "\t\t\t\t\t--------------------------------------------" << endl;
}
void CarService::displaySel(int choice)
{
	if (choice == 1)
	{
		rDisplay();
		infoR();
	}
	else if (choice == 2)
	{
		getInfo();
		sell();
	}
	else if (choice == 3)
	{
		displayOrder();
		res();
	}
	else if (choice == 4)
	{
		displayHire();
	}
	else if (choice == 5)
	{
		washDisplay();
	}
	else if (choice == 6)
	{
		rep();
	}
	else if (choice == 7)
	{
		disCall();
	}
	else if (choice == 8)
	{
		disParts();
	}
	else if (choice == 9)
	{
		disSer();
	}
	else if (choice == 10)
	{
		dPaint();
		cnf();
	}
}














