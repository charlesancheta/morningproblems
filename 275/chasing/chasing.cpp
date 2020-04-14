#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  // declare variables
  unsigned int s, n; 
  int a[1000], out; 
  // read the input
  cin >> s >> n;
  for (unsigned int i = 0; i < n; i++) {
    cin >> a[i];
  }
  // solve the problem
  bool cycle = false; out = 0;
  unsigned int count;
  while (!cycle && out >= 0) {
    if (a[out] >= 0) {
      out = a[out] - s;
    } else {
      out = a[out];
    }
    count++;
    if (count > n) {
      cycle = true;
    }
  }
  // print the output
  if (cycle) {cout << "There was a cycle" << endl;}
  else {cout << out << endl;}
  return 0;
}
