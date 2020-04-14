#include <iostream>

using namespace std;

int main() {
  // Declare your variables
  int n,k,s;
  int prizes[100000], friends[100000];
  int total = 0;
  // Read the input
  cin >> n >> k >> s;
  for (int i = 0; i < n; i++) {
    cin >> prizes[i];
  } 
  // Solve the problem
  for (int i = 0; i < k; i++) {
    cin >> friends[i];
    total += prizes[(friends[i] + s) % n];
  }
  cout << total << endl;
  return 0;
}
