#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, q;
  // Read in the input
  cin >> n >> q;
  vector<int> calls(n);
  vector<int> s(q);
  vector<int> t(q);
  calls[0] = 0;
  for (int i = 1; i <= n; i++) {
    cin >> calls[i];
    calls[i] += calls[i-1];
  }  
  // Solve the problem
  for (int i = 0; i < q; i++) {
    cin >> s[i] >> t[i];
    // Output the result
    cout << calls[t[i]] - calls[s[i]-1] << endl;
  }

  return 0;
}