#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main() {
  // Declare your variables
  int n, m, num, fr;  
  vector <int> nums[100000];
  // Read the input
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> m;
    for (int j = 0; j < m; j++) {
      cin >> num;
      nums[i].push_back(num);
    }    
  }
  cin >> fr;
  // Solve the problem
  for (unsigned int i = 0; i < nums[fr].size(); i++) {
    std::cout << nums[fr][i] << ' ';
  }
  return 0;
}
