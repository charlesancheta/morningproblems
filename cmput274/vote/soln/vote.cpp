#include <iostream>

using namespace std;

int main() {
    int n = 0;
    int vote[1001];

    // keep reading until we see 0
    while (cin >> vote[n] && vote[n] != 0) {
        ++n;
    }

    // now n == # votes and vote[i] is the i'th vote
    // for 0 <= i <= n-1

    // solve the problem and print the answer
    // good luck! (and remember to vote next election) :)

    return 0;
}
