#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

typedef unsigned int u;

int main() {
	// good luck and happy quarantining :)
  u n, T;
  cin >> n >> T;
  vector<u> nums(n);
  unordered_map<u,u> prods;
  for (u i = 0; i < n; i++) {
    cin >> nums[i];
    prods[nums[i]] = nums[i];
  }
  int count = 0;
  for (u i = 0; i < n; i++) {
    if (prods.find(T - nums[i]) != prods.end()) {
      count++;
    }
  }
  

  cout << count/2 << endl;

	return 0;
}
