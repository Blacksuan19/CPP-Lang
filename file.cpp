#include <iostream>
#include <fstream>
#include<cstdlib>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	string data;
	ofstream outfile;
	outfile.open (filename.c_str());
	if (outfile.fail())
	{
		cout << "the file was not sucessfully opened" << endl;
		exit(1);
	}
	outfile << setiosflags (ios::fixed)
					<< setiosflags (ios::showpoint)
					<< setprecision(2)
					<< "this is something am sure ill never use because why tf would i make and write to file in cpp when i have bash and nano???" << endl
					<< "anyway fack this shit dude" << endl;
					outfile.close();

	return 0;
}