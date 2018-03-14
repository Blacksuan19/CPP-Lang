// display which season of the year is it based on month and day input by user
#include <iostream>
using namespace std;

int main() {
	int month, day;
	cout << "enter month and day: ";
	cin >> month >> day;
	if (month == 1 | month == 2 | month == 3) {
		if (month % 3 == 1 | day < 21)
		{
			cout << "the current season is Winter" << '\n';
		}


		else if (month % 3 == 0 && day >= 21)
		{
			cout << "the current season is Spring" << '\n';

		}
	}
	if (month == 4 | month == 5 | month == 6) {
		if (month % 3 == 1 | day < 21)
		{
			cout << "the current season is Spring" << '\n';
		}


		else if (month % 3 == 0 && day >= 21)
		{
			cout << "the current season is Summer" << '\n';

		}
	}
	if (month == 7 | month == 8 | month == 9) {
		if (month % 3 == 1 | day < 21)
		{
			cout << "the current season is Summer" << '\n';
		}


		else if (month % 3 == 0 && day >= 21)
		{
			cout << "the current season is Fall" << '\n';

		}
	}
	if (month == 10 | month == 11 | month == 12) {
		if (month % 3 == 1 | day < 21)
		{
			cout << "the current season is Fall" << '\n';
		}


		else if (month % 3 == 0 && day >= 21)
		{
			cout << "the current season is Winter" << '\n';

		}
	}
	return 0;
}
