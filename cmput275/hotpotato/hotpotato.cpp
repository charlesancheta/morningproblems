#include <iostream>
#include <queue> // may or may not be useful

using namespace std;

int main() {
  // Good luck :)
  int n, q, p;
  cin >> n >> q;
  queue<int> qu;
  for (int i = 0; i < n; i++) {
    qu.push(i);
  }
  qu.push(qu.front());
  qu.pop();
  while (qu.size() != 1) {
    for (int i = 0; i < q - 1; i++) {
      qu.push(qu.front());
      qu.pop();
    }
    qu.pop();
  }
  cout << qu.front() << endl;
  return 0;
}
