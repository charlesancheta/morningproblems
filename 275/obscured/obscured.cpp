#include <iostream>
using namespace std;

int main() {
	// Last one! I know it seems hard but I believe in you!
  // Good luck :)
  int n;
  cin >> n;
  int height[n], blocked[n];
  for (int i = 0; i < n; i++) {
    cin >> height[i];
  }
  blocked[0] = -1; // -1 means there's no one blocking
  for (int i = 1; i < n; i++) {
    if (height[i] > height[i - 1]) {
      blocked[i] = blocked[i - 1];
      // finds the shortest that would block the current person
      // break out if there's no one blocking
      while (blocked[i] != -1 && height[i] > height[blocked[i]]) {
        blocked[i] = blocked[blocked[i]];
      }
    } else {
      blocked[i] = i - 1;
    }
  }
  
  for (int i = 0; i < n; i++) {
    if (blocked[i] == -1) {
      cout << "X ";
    } else {
      cout << blocked[i] << ' ';
    }
  }
  
	return 0;
}