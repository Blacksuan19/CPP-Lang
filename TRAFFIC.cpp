// no need for this comment really lol
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	int light, red = 1, yellow = 2, green = 3;
	cout << "enter the traffic light color: " << '\n';
	cout << "(1)red, (2)yellow, (3)green: ";
	cin >> light;
	switch (light) {
	case 1: cout << "STOP!!" << '\n'; break;
	case 2: cout << "ALERT..." << '\n'; break;
	case 3: cout << "GO..." << '\n'; break;
	default: cout << "OOPS... COLOR MALUFUNCTION?" << '\n';
	}
	return 0;
}
