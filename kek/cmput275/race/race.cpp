#include <iostream>

using namespace std;

int main() {
	// The semester is almost over... you can do it!
    // Good luck with the morning problem :)
  int t, n, pos[10000], new_pos[10000];
  cin >> t >> n;
  for (int i = 0; i < n; i++) {
    cin >> pos[i];
    new_pos[i] = i + t * pos[i];
  }
  int pass = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i < j && new_pos[i] > new_pos[j]) pass++; 
    }
  }
  
  cout << pass << endl;  
	return 0;
}
