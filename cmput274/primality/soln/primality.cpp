#include <iostream>
#include <cmath> // for sqrt

using namespace std;

// given a positive integer n <= 4,000,000 this returns the smallest
// integer d such that d*d > n
//
// not needed to solve the problem, but some might find it helpful
unsigned int upper_sqrt(unsigned int n) {
    unsigned int d = sqrt((double) n);

    // should iterate at most once or twice
    // the second condition is to protect against overflow
    // if n is very close to the maximum 32-bit integer
    while (d*d <= n && d <= (1<<16)) {
        ++d;
    }

    return d;
}

int main() {
    // read in the integer
    // NOTE: look *carefully* at the maximum value of the number
    // in the problem description


    // determine if the integer is prime
    // good luck and remember that composite numbers are for chumps :)

    // print the answer

    return 0;
}
