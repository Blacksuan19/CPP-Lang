// this was actually a 30 min lab test and i killed it!!
#include <iostream>
#include <iomanip>
using namespace std;

struct SmartPhones
{
	char brand[15];
	char model[50];
	char OS[10];
	float screen;
	int ram;
	int memory;
	int sold;
	int unit_price;
	int total;
};
void createRec(SmartPhones a[], int b);
void computeSales(SmartPhones a[], int b);
int main()
{
	SmartPhones array[10] = {};
	int num, n;
	cout << "how many SmartPhones? ";
	cin >> num;
	createRec(array, num);
	computeSales(array, num);
	cout << endl;
	cout << setw(15) << left << "Brand"
	     << setw(15) << left << "Model"
	     << setw(15) << left << "OS"
	     << setw(15) << left << "Screen(\")"
	     << setw(15) << left << "RAM(GB)"
	     << setw(15) << left << "Memory(GB)"
	     << setw(15) << left << "Unit sold"
	     << setw(15) << left << "price / unit"
	     << setw(15) << left << "Total sale" << endl;
	cout << endl;
	for (int i = 0; i < num; ++i)
	{
		cout << setw(15) << left << array[i].brand
		     << setw(15) << left << array[i].model
		     << setw(15) << left << array[i].OS
		     << setw(15) << left << array[i].screen
		     << setw(15) << left << array[i].ram
		     << setw(15) << left << array[i].memory
		     << setw(15) << left << array[i].sold
		     << setw(15) << left << array[i].unit_price
		     << setw(15) << left << array[i].total << endl;
	}
	return 0;
}
void createRec(SmartPhones a[], int b)
{
	for (int i = 0; i < b; ++i)
	{
		cout << "enter Smart Phone " << i + 1 <<  " brand: ";
		cin >> a[i].brand;
		cout << "enter Smart Phone " << i + 1 <<  " model: ";
		cin >> a[i].model;
		cout << "enter Smart Phone " << i + 1 <<  " OS: ";
		cin >> a[i].OS;
		cout << "enter Smart Phone " << i + 1 <<  " screen: ";
		cin >> a[i].screen;
		cout << "enter Smart Phone " << i + 1 <<  " RAM: ";
		cin >> a[i].ram;
		cout << "enter Smart Phone " << i + 1 <<  " Memory: ";
		cin >> a[i].memory;
		cout << "enter Smart Phone " << i + 1 <<  " unit sold: ";
		cin >> a[i].sold;
		cout << "enter Smart Phone " << i + 1 <<  " unit price: ";
		cin >> a[i].unit_price;
	}

}
void computeSales(SmartPhones a[], int b)
{
	// i dont get the index number part.
	for (int i = 0; i < b; ++i)
	{
		a[i].total = a[i].sold * a[i].unit_price;
	}

}