#include <iostream>
#include <iomanip>
#include <cmath>
#define PI 3.14
using namespace std;
double calcVal(double, double);
int main()
{
	double radious, height, volume;
	cout << "enter can radious and height: ";
	cin >> radious >> height;
	volume = calcVal(radious, height);
	cout << "\nthe can volume is: " << fixed << setprecision(3) << volume << endl;
	return 0;
}
double calcVal(double a, double b)
{
	double v;
	v = (PI * pow(a, 2)) * (b / 3);
	return v;
}