#include <iostream>

using namespace std;

int main() {
  int n;
  int array[1000];
  int answer;

  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> array[i];
  }

  // now compute the answer and put it into the "answer" variable
  // good luck :) you've got this!
  // p.s. don't forget your semi-colons
    for (int i = 1; i < n; i++) {
        if (array[i] > array[i-1]) {
            answer += array[i] - array[i-1];
        }
    }

  

  // output the result
  cout << answer << endl;

  return 0;
}
