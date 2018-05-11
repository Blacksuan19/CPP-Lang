#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	const int COL = 2;
	int test_case;
	cin >> test_case;
	long long per_case[test_case][COL], mod[test_case] = {}, total[test_case] = {};
	for (int i = 0; i < test_case; ++i)
	{
		for (int j = 0; j < COL; ++j)
		{
			cin >> per_case[i][j];
		}
	}
	for (int i = 0; i < test_case; ++i)
	{
		for (int j = 0; j < COL; ++j)
		{
			mod[i] = pow(per_case[i][j - 1], per_case[i][j]);
			total[i] = mod[i] % 1000007;

		}
	}
	for (int i = 0; i < test_case; ++i)
	{
		cout << "case #" << i + 1<< ": " << total[i]  << endl;
	}
	return 0;
}