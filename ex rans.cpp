/* C++ Program - Transpose Matrix */

#include<iostream>
// #include<conio.h>
using namespace std;
int main()
{
	int arr[3][3], i, j, arrt[3][3];
	cout << "Enter 3*3 Array Elements : ";
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cin >> arr[i][j];
		}
	}
	cout << "Transposing Array...\n";
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			arrt[i][j] = arr[j][i];
		}
	}
	cout << "Transpose of the Matrix is :\n";
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << arrt[i][j];
		}
		cout << "\n";
	}
}