#include <iostream>
#include <vector>
using namespace std;

int main() {
  int s, a, n;
  // Read in the input
  cin >> s >> a >> n;
  vector<int> array(a, 0);
  // Solve the problem
  char com;
  long long num1, num2;
  for (int i = 0; i < n; i++) {
    cin >> com;
    if (com == 'C') {
      cin >> num1;
      vector<bool> cycle(a, false);
      while (true) {
        if ((num1 < s && num1 >= 0) || (unsigned) num1 >= (unsigned) (s + a)) {
          cout << "Out of bounds" << endl;
          break;
        }
        if (cycle[num1 - s]) {
          cout << "There was a cycle" << endl;
          break;
        } else {
          cycle[num1 - s] = true;
        } 
        num1 = array[num1 - s];
        if (num1 < 0) {
          cout << num1 << endl;
          break;
        }
      }
    } else {
      cin >> num1 >> num2;
      array[num1 - s] = num2;
    }
  }
  return 0;
}