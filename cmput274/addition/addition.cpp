#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n], b[n], sum[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    int carry = 0;
    for (int i = n-1; i >= 0; i--) {
        sum[i] = a[i] + b[i] + carry;
        carry = 0;
        if (sum[i] >= 10) {
            sum[i] %= 10;
            carry = 1;
        }
    }
    if (carry == 1) {
        cout << carry << ' ';
    }
    for (int i = 0; i < n; i++) {
        cout << sum[i] << ' ';
    }
    return 0;
}