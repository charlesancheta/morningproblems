#include <iostream>
#include <cmath> // for sqrt

using namespace std;


bool primecheck(unsigned int n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if ((n % 2 == 0) || (n % 3 == 0)) {
        return false;
    }
    for (unsigned int i = 5; i*i <= n; i+=6) {
        if (n%i == 0 || n%(i+2) == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    // read in the integer
    // NOTE: look *carefully* at the maximum value of the number
    // in the problem description
    unsigned int n;
    cin >> n;

    // determine if the integer is prime
    // good luck and remember that composite numbers are for chumps :)
    bool isPrime = primecheck(n);

    // print the answer
    if (isPrime) {
        cout << "prime" << endl;
    }
    else {
        cout << "not prime" << endl;
    }

    return 0;
}
