#include <iostream>
using namespace std;
struct Automobile
{
	char model[50];
	int year_made;
	int engine_cc;
	char color[20];
};
int calAge(int);
int main()
{
	int NUM;
	Automobile lambo[NUM];
	cout << "how many Lamborghini's you want: ";
	cin >> NUM;
	for (int i = 0; i < NUM; ++i)
	{
		cout << "enter Lamborghini " << i + 1 << " model, made year, engine capacity and color: " << endl;
		cin >> lambo[i].model >>  lambo[i].year_made >>  lambo[i].engine_cc >>  lambo[i].color;
	}
	for (int i = 0; i < NUM; ++i)
	{
		cout << "lambo number " << i << " specifications are: " << endl
		     << "model: " << lambo[i].model << endl
		     <<  "year made: " << lambo[i].year_made << endl
		     <<  "engine capacity: " << lambo[i].engine_cc << endl
		     <<  "Color " << lambo[i].color << endl
		     << "Age " << calAge(lambo[i].year_made) << endl
		     << "\n\n" << endl;
	}
	return 0;
}
int calAge(int a)
{
	int b;
	b = 2018 - a;
	return b;
}