#include <iostream>
using namespace std;

#include <iomanip>
int main()
{
	int average, population1, population2, population3, population4, population5, population6;
	char symbol = '#';
	cout << "Enter population of city 1: ";
	cin >> population1;
	cout << "Enter population of city 2: ";
	cin >> population2;
	cout << "Enter population of city 3: ";
	cin >> population3;
	cout << "Enter population of city 4: ";
	cin >> population4;
	cout << "Enter population of city 5: ";
	cin >> population5;
	cout << "Enter population of city 6: ";
	cin >> population6;
	average = (population1 + population2 + population3 + population4 + population5 + population6) / 6;
	cout << "Average population for 6 cities: " << average << endl;
	cout << "POPULATION (each # represents 10,000 people)" << endl;
	cout << "City 1: ";
	for (int i = 10000; i < population1; i = i + 10000)
	{
		cout << symbol << " ";
	}
	cout << "#" << endl; // this is because it'll always have one missing so have to add it separately 
	cout << "City 2: ";
	for (int i = 10000; i < population2; i = i + 10000)
	{
		cout << symbol << " ";
	}
	cout << "#" << endl;
	cout << "City 3: ";
	for (int i = 10000; i < population3; i = i + 10000)
	{
		cout << symbol << " ";
	}
	cout << "#" << endl;
	cout << "City 4: ";
	for (int i = 10000; i < population4; i = i + 10000)
	{
		cout << symbol << " ";
	}
	cout << "#" << endl;
	cout << "City 5: ";
	for (int i = 10000; i < population5; i = i + 10000)
	{
		cout << symbol << " ";
	}
	cout << "#" << endl;
	cout << "City 6: ";
	for (int i = 10000; i < population6; i = i + 10000)
	{
		cout << symbol << " ";
	}
	cout << "#" << endl;
	return 0;
}
