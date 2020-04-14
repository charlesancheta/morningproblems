#include <iostream>
#include <string.h>
using namespace std;

int main() {
  char s[200001];
  cin >> s;
  int len = strlen(s);
  int low, high, start = 0, max = 1;
  for (int i = 1; i < len; ++i) {  
    low = i - 1;  
    high = i + 1;  
    while (low >= 0 && high < len && s[low] == s[high]) {  
      if (high - low + 1 > max) {  
        start = low;  
        max = high - low + 1;  
      }  
      --low;  
      ++high;  
    } 
  }
  cout << max << endl;
  return 0;
}