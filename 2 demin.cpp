#include <iostream>
#include <iomanip>
using namespace std;
const int COL = 4, ROWS = 7;
float temp[ROWS][COL], Average[ROWS];
int days[7];
void calcAvg();
int main() {
      cout << "Enter temperature's: " << '\n';
      for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COL; j++) {
                  cin >> temp[i][j];
            }
      }
      calcAvg();
      for (int i = 0; i < ROWS; i++) {
            cout << i << " " << '\n';
            for (int j = 0; j < COL; j++) {
                  cout << temp[i][j] <<  "      ";
            }
            cout << endl;
      }
      return 0;
}
void calcAvg()
{
      for (int x = 0; x < ROWS; x++) {
            for (int y = 0; y < COL; y++) {
                  Average[x] = (Average[x] + temp[x][y]) / 3;
            }
      }
}
