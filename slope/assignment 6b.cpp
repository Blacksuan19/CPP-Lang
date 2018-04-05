#include <iostream>
#include "slop.h"
using namespace std;
double findSlope();
int main()
{
	double p1, p2, p3, p4, slope;
	cout << "enter 4 connection points: ";
	cin >> p1 >> p2 >> p3 >> p4;
	slope = findSlope(p1,p2, p3, p4);
	cout << "\npoint1		point2		slope" << endl;
	cout << "(" << p1 << "," << p3 << ")		" << "(" << p2 << "," << p4 << ")		 " << slope << endl;
	return 0;
}