#include <iostream>

using namespace std;

int main() {
  int a[100], b[100], product[200] = {};
  int n, m;
  // Read the input
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }
  
  // Solve the problem
  for (int i = m - 1; i >= 0; i--) {
    for (int j = n - 1; j >= 0; j--) {
      int prod = a[j] * b[i];
      product[i+j+1] += prod % 10;
      product[i+j] += prod / 10;
    }
  }
  for (int i = n + m - 2; i >= 0; i--) {
    if (product[i + 1] >= 10) {
      product[i] += (product[i + 1] / 10);
      product[i + 1] %= 10;
    }
  }
  
  for (int i = 0; i < n + m; i++) {
    cout << product[i] << ' ';
  }

  return 0;
}
