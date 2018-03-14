// display grade point based on user input
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	char grade;
	cout << "please enter grade: ";
	cin >> grade;
	switch (grade) {
	case 'A': case 'a': cout << "the grade point is 4.0" << '\n'; break;
	case 'B': case 'b': cout << "the grade point is 3.0" << '\n'; break;
	case 'C': case 'c': cout << "the grade point is 2.0" << '\n'; break;
	case 'D': case 'd': cout << "the grade point is 1.0" << '\n'; break;
	case 'F': case 'f': cout << "the grade point is 0.0" << '\n'; break;
	default: cout << "please enter a valid grade!";
	}
	return 0;
}
