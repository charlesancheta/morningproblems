#include <iostream>
using namespace std;

int main() {
  int x1, x2, x3, y1, y2, y3;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
  // ^ - XOR operator
  // the two equal values would cancel each other,
  // printing out the one that is different
  cout << (x1 ^ x2 ^ x3) << ' ' << (y1 ^ y2 ^ y3) << endl;
  return 0;
}