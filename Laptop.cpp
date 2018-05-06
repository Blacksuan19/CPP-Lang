#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int lap_num, col, price_quality[col][2], happy = 0;
	cin >> lap_num;
	for (int i = 0; i < lap_num; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			cin >> price_quality[i][j];
		}
	}
	for (int i = 0; i < lap_num; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			if (price_quality[i][1] > price_quality[i][2] || price_quality[i++][2] > price_quality[i++][1])
			{
				cout << "Happy Alex" << endl;
				happy = 1;
			}
			 if (happy == 0)
			{
				cout << "Poor Alex" << endl;
				break;
			}
		}
	}
	return 0;
}