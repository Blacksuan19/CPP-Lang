// some shipping shit
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	int sh_cost, place, side;
	cout << "where are you from (outsidse malaysia(1), in malaysia(2))? ";
	cin >> place;
	if (place == 1) {
		sh_cost = 30;
		cout << "shipping cost is RM" << sh_cost << '\n';
	}
	else if (place == 2) {
		cout << "which side(west(1), east(2))?";
		cin >> side;
		if (side == 1) {
			sh_cost = 10;
			cout << "shipping cost is RM" << sh_cost << '\n';
		}
		else if (side == 2) {
			sh_cost = 7;
			cout << "shipping cost is RM" << sh_cost << '\n';
		}
	}
	return 0;
}
