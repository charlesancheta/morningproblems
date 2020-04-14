#include <iostream>

using namespace std;

int main() {
  int m, n;
  int poly1[1000], poly2[1000];
  int prod[2000] = {};
  cin >> m >> n;
  for (int i = 0; i <= m; i++) {cin >> poly1[i];}
  for (int j = 0; j <= n; j++) {cin >> poly2[j];}
  for (int i = 0; i <= m; i++) {
    for (int j = 0; j <= n; j++) {
      prod[i+j] += poly1[i] * poly2[j];
    }
  }
  for (int i = 0; i <= m + n; i++) {
    cout << prod[i] << ' ';
  }
  return 0;
}