#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n = 0;
    int vote[1001];
    int count[1000];
    int mode;
    while (cin >> vote[n] && vote[n] != 0) {
        ++n;
    }
    count[0] = std::count(vote, vote+n, vote[0]);
    int max = count[0];
    for (int i = 1; i <= n - 1; ++i) {
        count[i] = std::count(vote, vote+n, vote[i]);
        if (count[i] > max) {
            max = count[i];
        }
    }
    int maxcount = 0;
    for (int i = 0; i <= n-1; i++) {
        if (count[i] == max) {
            if (mode != vote[i]) {
                mode = vote[i];
                maxcount++;
            } 
        }
    }
    if (maxcount > 1) {
        cout << "tie" << endl;
    } else {
        cout << mode << endl;
    }
    return 0;
}