#include <iostream>
#include <iomanip>
using namespace std;
void stars(); // decoration.
void tags(); // decoration.
// global declaration for global access.
const int rows = 12;
int coverage_type, extra_num, engine_capacity;
double market_P,  usage_type, ncd;
char ncd_yn[5], ex_parts_yn[5], extra_parts[rows][50], location[50], natural_yn;
int main()
{
	stars();
	cout << "\n				Welcome To Our Insurance Calculator\n\n";
	tags();
	cout << "\nThis Program Will Allow You To Calculate How Much You have to spend on insurance yearly\n\n" << endl;
	cout << "please enter market price for vehicle: ";
	cin >> market_P;
	cout << endl <<  "Please select coverage type: " << endl
	     << "1. comprehensive" << endl
	     << "2. third party" << endl;
	cin >> coverage_type;
	cout << endl << "please select engine capacity: " << endl
	     << "1. 0 - 1400 cc" << endl
	     << "2. 1401 - 1650 cc" << endl
	     << "3. 1651 - 2200 cc" << endl
	     << "4. 2201 - 3050 cc" << endl
	     << "5. 3051 - 4100 cc" << endl
	     << "6. over 4100 cc" << endl;
	     cin >> engine_capacity;
	cout << endl << "do you have no claim discount?(yes or no) ";
	cin >> ncd_yn;
	if (ncd_yn == "yes")
	{
		cout << endl << "please enter percentage of no claim discount: ";
		cin >> ncd;
	}
	else
	{} // just a place holder.
	if (coverage_type == 1) // based on some research additional coverage and natural disaster coverage are only available on  comprehensive type of coverage.
	{
		cout << endl << "do you have additional coverage for some parts? ";
		cin >> ex_parts_yn;
		if (ex_parts_yn == "yes")
		{
			cout << endl << "how many parts have additional coverage?";
			cin >> extra_num;
			cout << "please enter the names of " << extra_num << " parts with additional coverage: ";
			for (int i = 0; i < extra_num; ++i)
			{
				cin >> extra_parts[i];
			}
		}
		cout << endl << "do you have natural disaster coverage? ";
		cin >> natural_yn;
	}


	return 0;
}

void stars()
{
	cout << "			**************************************************" << endl;
}
void tags()
{
	cout << "			--------------------------------------------------" << endl;
}