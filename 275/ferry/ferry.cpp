#include <iostream>
using namespace std;

int main() {
    // 2nd last one! you're almost done!
	// good luck :)
  int n, m, t = 0;
  bool atWest = true;
  cin >> n >> m;
  int w[n];
  int e[m];
  for (int i = 0; i < n; i++) {cin >> w[i];}
  for (int i = 0; i < m; i++) {cin >> e[i];}
  int j = 0, k = 0;
  if (e[k] < w[j]) {
    t = e[k] + 100;
    atWest = false;
  }
  // while there are vehicles on either side
  while (j < n || k < m) {
    // both sides
    if (j < n && k < m) {
      if (w[j] < e[k]) {
        if (t < w[j]) {t = w[j];}
        if (atWest) {
          t += 100;
          atWest = false;
        } else {
          t += 200;
        }
        j++;
      } else {
        if (t < e[k]) {t = e[k];}
        if (atWest) {
          t += 200;
        } else {
          t += 100;
          atWest = true;
        }
        k++;
      }
    } else {
      // one side
      if (j < n) {
        if (t < w[j]) {t = w[j];}
        if (atWest) {
          t += 100;
          atWest = false;
        } else {
          t += 200;
        }
        j++;
      } else if (k < m) {
        if (t < e[k]) {t = e[k];}
        if (atWest) {
          t += 200;
        } else {
          t += 100;
          atWest = true;
        }
        k++;
      }
    }
  }
    
  cout << t << endl;
	return 0;
}