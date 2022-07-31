#pragma once
#include <iostream>
using namespace std;

class Rent
{
private:
	string car1;
	string car2;
	int pri1;
	int pri2;
	int total;
	int month;
	int date;
	int year;
	char choice;
	int day;
public:
	Rent();
	void rDisplay();
	void infoR();
};
class Sell
{
private:
	string name;
	string model;
	int price;
	string address;
	string condition;
	string phone;
public:
	Sell();
	void getInfo();
	void sell();
};
class Order
{
private:
	string name;
	string model;
	int price;

public:
	Order();
	void displayOrder();
	void res();
};
class Hire
{
private:
	string driv1;
	string driv2;
	int ren1;
	int ren2;
	int date;
	char choice;
public:
	Hire();
	void displayHire();

};
class Wash
{
public:
	void washDisplay();
};
class Paint
{
private:
	string clr;
	string mdl;
public:
	void dPaint();
	void cnf();
};
class Repair
{
public:
	void rep();
};
class Call
{
private:
	string address;
	string phone;
	int date;
public:
	Call();
	void disCall();
};
class Parts
{
private:
	string parts[100];
	string address;
	string phone;
	int price;
public:
	Parts();
	void disParts();
};
class Service
{
public:
	void disSer();
};
class CarService :public Rent, public Sell, public Order, public Hire, public Wash, public Paint, public Repair,public Service, public Call,public Parts
{
public:
	void display();
	void displaySel(int choice);
};
