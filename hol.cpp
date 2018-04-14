#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;
double  calCost(int a, double b, int c, int d);
int main() {
  const double Re_fl = 120.00, Re_hot = 260.00, Pan_fl = 90.00, Pan_hot = 330.00, Ka_fl = 150.00, Ka_hot = 390.00;
  double dis_price;
  int dest, total_ad, total_ch, cost_hot, cost_fl, total_pr;
  cout << "Enter Destination: "<< endl;
  cout <<         "1. Redang "<< endl;
  cout <<         "2. Pankgor" << endl;
  cout <<         "3. Kapas:" << endl;
  cin >> dest;
  cout << "Enter total of adults, total of children: ";
  cin >> total_ad >> total_ch;
  if (dest == 1) {
    total_pr = (Re_fl + Re_hot) * total_ad;
    cout << "the total price is: " << total_pr << endl;
    dis_price == calCost(dest, total_pr, total_ad, total_ch);
    cout << "The discount amount is:" << dis_price;
	}
	if (dest == 2) {
    total_pr = Pan_fl + Pan_hot * total_ad;
    cout << "the total price is: " << total_pr << endl;
    dis_price == calCost(dest, total_pr, total_ad, total_ch);
    cout << "The discount amount is:" << dis_price;
	}
	if (dest == 3) {
    total_pr = Ka_fl + Ka_hot * total_ad;
    cout << "the total price is: " << total_pr << endl;
    dis_price == calCost(dest, total_pr, total_ad, total_ch);
    cout << "The total package cost for " << total_ad << " adults and " << total_ch << " children is:" << right << setprecision(2) << fixed << dis_price;
	}
  return 0;
}
double calCost(int a, double b, int c, int d)
{
  double e = 0.0;
  if (a == 1) {
    if (c == 2) {
      e == .2 * b;
    }
    if (c <= 3) {
      e == .3 * b;
    }
    if (d >= 1) {
      e == (d * .5) * b;
    }
  }
  if (a == 2) {
    if (c == 2) {
      e == .2 * b;
    }
    if (c <= 3) {
      e == .3 * b;
    }
    if (d >= 1) {
      e == (d * .5) * b;
    }
  }
  if (a == 3) {
    if (c == 2) {
      e == .2 * b;
    }
    if (c <= 3) {
      e == .3 * b;
    }
    if (d >= 1) {
      e == (d * .5) * b;
    }
  }
  return e;
}
