#include <iostream>
using namespace std;
int main()
{
	char card[5];
	int min = 0;
	cin >> card;
	for (int i = 0; i < 5; ++i)
	{
		if (card[i] == 'a' || card[i] == 'e' || card[i] == 'i' || card[i] == 'o'  || card[i] == 'u' && card[i] % 2 == 0)
		{
			min = min + 1;
		}
	}
	cout << min << endl;
	return 0;
}