#include <iostream>
using namespace std;
struct Automobile
{
	char model[50];
	int year_made;
	int engine_cc;
	char color[20];
};
int calAge(int);
int main()
{
	Automobile lambo;
	cout << "enter Lamborghini specifications: " << endl;
	cout << "enter model: ";
	cin >> lambo.model;
	cout << "enter made year: ";
	cin >> lambo.year_made;
	cout << "enter engine capacity: ";
	cin >> lambo.engine_cc;
	cout << "enter color: ";
	cin >> lambo.color;
	cout << "\nhere are your car specifications: " << endl
			    << "model: " << lambo.model << endl
			    << "year made: " << lambo.year_made << endl
			    << "Age: " << calAge(lambo.year_made) << endl
			    << "engine capacity: " << lambo.engine_cc << "cc" << endl
			    << "color: " << lambo.color << endl;
	return 0;
}
int calAge(int a)
{
	int b;
	b = 2018 - a;
	return b;
}