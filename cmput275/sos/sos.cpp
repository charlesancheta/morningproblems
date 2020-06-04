#include <iostream>
#include <cmath> // for sqrt

using namespace std;

// Compute the greatest integer d such that d*d <= n
// (i.e. the floor of the square root).
//
// You may use this function or ignore it, it's up to you.
unsigned int integer_sqrt(unsigned int x) {
  unsigned int d = sqrt(x);

  // should iterate at most once, probably none
  while ((d+1)*(d+1) <= x) {
    ++d;
  }

  // probably does not iterate even once
  while (d*d > x) {
    --d;
  }

  // now at this point we know (d+1)*(d+1) > x yet d*d <= x

  return d;
}

int main() {
  // declare your variables
  unsigned int n, d, b, bs; bool sos = false;
  // read the input
  cin >> n;
  d = integer_sqrt(n);
  // solve the problem
  int i = d;
  while (i >= 0) {
    bs = n - i*i;
    b = integer_sqrt(bs);
    if (n == i*i + b*b) {
      sos = true;
      i = 0;
    }
    i--;
  }
  // print the answer
  if (!sos) {cout << "not ";}
  cout << "sum of squares\n";
  return 0;
}
