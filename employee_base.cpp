#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct PayRecord
{
	int id;
	string name;
	double rate;
};
int main()
{
	int NUM;
	PayRecord employee[NUM];
	cout << "how many employee's are there? ";
	cin >> NUM;
	for (int i = 0; i < NUM; ++i)
	{
		cout << "enter employee " << i + 1 <<  " id, name and rate: " << endl;
		cin >> employee[i].id >> employee[i].name >> employee[i].rate;
	}
	for (int i = 0; i < NUM; ++i)
	{
		cout << setw(8) << left << employee[i].id
		     << setw(10) << left << employee[i].name
		     << setw(5)  << left << employee[i].rate << endl;
	}
	return 0;
}