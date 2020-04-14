#include <iostream>

using namespace std;

unsigned int powmod(unsigned int x, unsigned int pow, unsigned int m) {
  unsigned int ans = 1;
  unsigned int pow_x = x % m;
  while (pow > 0) {
	if (pow & 1){
	  ans = (ans * pow_x) % m;
	}
	pow_x = (pow_x * pow_x) % m;
	pow >>= 1;
  }
  return ans % m;
}
int main() {
  // Declare your variables
  unsigned int d,x,m, eval, coeff, term;
  // Read the input
  cin >> d >> x >> m >> eval;
  // Solve the problem
  for (unsigned int i = 1; i <= d; i++) {
    cin >> coeff;

    eval += (coeff * powmod(x,i,m)) % m ;
  }
  cout << eval % m << endl;
  return 0;
}
