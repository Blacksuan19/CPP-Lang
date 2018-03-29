#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int annual_rate,  year = 1, value;
	float year_rate, year_value;
	cout  << "Enter annual rate (%)   : ";
	cin >> annual_rate;
	cout << "Enter value to rate     : ";
	cin >> value;
	year_value = ( annual_rate * 10 + value );
	year_rate = ( 1 / ( year_value / value ) ) * value;
	cout << "Inflation Rate:" << endl;
	cout << "Year                    Expected Amount                    Inflated Amount" << endl;
	while (year <= 4)
	{

		cout << setw(4) << right << year
		          << "                            " << fixed << setprecision(2) << year_value
		          << "                             " << fixed << setprecision(2) << year_rate << endl;
		year_value = year_value + (annual_rate * 10);
		year_rate = ( 1 / ( year_value / value ) ) * value;
		year++;
	}
	return 0;
}