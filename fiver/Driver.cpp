#include "CarService.h"
#include "Call.cpp"
#include "CarService.cpp"
#include "Hire.cpp"
#include "Order.cpp"
#include "Paint.cpp"
#include "Parts.cpp"
#include "Rent.cpp"
#include "Repair.cpp"
#include "Sellcpp.cpp"
#include "service.cpp"
#include "Wash.cpp"


int main()
{
	CarService c;
	int choice;
	c.display();
	cout << "\t\t\t\t\t  \t  Enter your Choice !             " << endl;
	cout << "\t\t\t\t\t\t           "; cin >> choice;
	if (choice == '0')
		exit(0);
	c.displaySel(choice);
}
