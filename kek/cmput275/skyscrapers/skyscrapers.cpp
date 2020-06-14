#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	// you know the drill! good luck :)
  int num;
  int n;
  cin >> n;
  int max = 0;
  unordered_map<int,int> h;
  for (int i = 0; i < n; i++) {
    cin >> num;
    if (num > max) {
      max = num;
    }
    auto it = h.find(num);
    if (it == h.end()) {
      h[num] = 1;
    } else {
      h[num] += 1;
    }
  }
  int cum = h[max];
  for (int i = max - 1; i >= 1; i--) {
    h[i] += cum;
    cum = h[i];
    
  }
  for (int i = 1; i <= max; i++) {
    cout << h[i] << endl;
  }
  
	return 0;
}
