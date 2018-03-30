#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double a, b, c, x1, x2, disc, r_part, img_part;
	cout << "\nQuadratic equation solver" << endl;
	cout << "=========================\n" << endl;
	cout << "Enter the equation coefficients (a ,b, c) : ";
	cin >> a >> b >> c;
	cout << "\nThe quadratic equation is: ";
	cout << a << "x^2 + " << b << "x + " << c << " = 0 \n" << endl;
	disc = b * b - 4 * a * c;
	if (disc > 0)
	{
		x1 = (-b + sqrt(disc)) / (2 * a);
		x2 = (-b - sqrt(disc)) / (2 * a);
		cout << "Roots are real and different." << endl;
		cout << fixed << setprecision(4) <<  "x1 = " << x1 << endl;
		cout << fixed << setprecision(4) << "x2 = " << x2 << endl;
	}
	else if (disc == 0)
	{
		cout << "Roots are real and same." << endl;
		x1 = (-b + sqrt(disc)) / (2 * a);
		cout << fixed << setprecision(4)  << "x1 = x2 =" << x1 << endl;
	}
	else
	{
		r_part = -b / (2 * a);
		img_part = sqrt(-disc) / (2 * a);
		cout << "Roots are complex and different."  << endl;

		cout << fixed << setprecision(4) << "x1 = " << r_part << " + i" << img_part << endl;
		cout << fixed << setprecision(4)  << "x2 = " << r_part << " - i" << img_part << endl;
	}
	return 0;
}
