#include <iostream>
#include <algorithm> // for max()

using namespace std;

int main() {
  // declare variables
  int n;
  int plat[1000];
  int longest = 1;
  // read the input
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> plat[i];
  }
  // compute the answer
  int test = plat[0];
  int flat = 1;
  for (int i = 1; i < n; i++) {
    if (plat[i] == test) {
      flat++;
      if (flat > longest) {
        longest = flat;
      }
    } else {
      flat = 1;
    }
    test = plat[i];
  }
  // print the output
  cout << longest << endl;
  return 0;
}
