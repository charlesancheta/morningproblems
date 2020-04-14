#include <iostream>
#include <algorithm> // for max()

using namespace std;

int main() {
  // declare your variables
  int n, stairs[100000], tumble = 0;
  // read the input
  cin >> n;
  cin >> stairs[0];
  int peak = stairs[0];
  // compute the answer
  for (int i = 1; i < n; i++) {
    cin >> stairs[i];
    if (stairs[i] < peak) {
      if (stairs[i] < stairs[i-1]) {
        if (peak - stairs[i] > tumble) {
          tumble = peak - stairs[i];
        } 
      } else {
        peak = stairs[i - 1];
      }
    } else {
      peak = stairs[i];
    }
  }

  // output the answer
  cout << tumble << endl;
  return 0;
}
