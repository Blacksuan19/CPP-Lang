#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	char x, y, z, xy, y_not, zxy, not_xz, not_xyz;
	cout << "enter values for x y and z: ";
	cin >> x >> y >> z;
	//create not y variable.
	if (y == 'T')
	{
		y_not == 'F';
	}
	else if (y == 'F')
	{
		y_not == 'T';
	}
	// creating x || !y.
	if (x == 'T'  || 	y_not == 'T' )
	{
		xy == 'T';
	}
	else	if (x == 'F'  || 	y_not == 'T' )
	{
		xy == 'T';
	}
	else if (x == 'T'  || 	y_not == 'F' )
	{
		xy == 'T';
	}
	else if (x == 'F'  || 	y_not == 'F' )
	{
		xy == 'T';
	}
	// create z && xy thing.
	if (z == 'T' && xy == 'T')
	{
		zxy == 'T';
	}
	else
		zxy == 'F'; // for && operator both need to be true

	// create the not x || z part
	if (x == 'T' || z == 'T')
	{
		not_xz == 'F';
	}
	if (x == 'F' || z == 'T')
	{
		not_xz == 'F';
	}
	if (x == 'T' || z == 'F')
	{
		not_xz == 'F';
	}
	if (x == 'F' || z == 'F')
	{
		not_xz == 'T';
	}
	// create !xz and y part
	if (not_xz == 'T' && y == 'T')
	{
		not_xyz == 'T';
	}
	else
		not_xyz == 'F';
	return 0;
}