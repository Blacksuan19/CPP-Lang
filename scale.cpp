//earthquake scale and shit
#include <iostream>
using namespace std;
int main()
{
	double Scale;
	cout << "Please enter Richter Scale: ";
	cin >> Scale;
	if (Scale >= 1.0 && Scale <= 3.9)
	{
		cout << "the earthquake type is Micro " << endl;
		if (Scale <= 1.9)
		{
			cout << "the Magnitude is I, and the type is Micro" << endl;
		}
		else if (Scale <= 3.9)
		{
			cout << "the Magnitude is II - III, and the type is Minor" << endl;
		}
	}
	if (Scale >= 4.0 && Scale <= 5.9)
	{
		cout << "the earthquake type is Light " << endl;
		cout << "the Magnitude is IV - V, and the type is Moderate" << endl;
	}
	if (Scale >= 6.0 && Scale <= 6.9)
	{
		cout << "the earthquake type is Strong " << endl;
		cout << "the Magnitude is VI - VII, and the type is Very Strong" << endl;

	}
	if (Scale >= 7)
	{
		cout << "the earthquake type is Severe" << endl;
		if (Scale <= 7.9)
		{
			cout << "the Magnitude is VIII-IX, and the type is Severe" << endl;
		}
		else
		{
			cout << "the Magnitude is X, and the type is Extreme" << endl;
		}
	}
	return 0;
}