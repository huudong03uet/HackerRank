#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n_test; cin >> n_test;
    while (n_test--) {
        int int_max = 1;
        int n; cin >> n;
        int tmp = sqrt(n) + 1, divisor = 2; bool isPrint = false, isDivisor = true;

        while (n != 1) {
            if (divisor > n / 2) {
                isPrint = true;
                cout << n << endl; break;
            }
            while (n % divisor == 0) {
                int_max = divisor;
                n /= divisor;  isDivisor = true;
            }
            divisor++;
            if (divisor > tmp && isDivisor == false) {
                isPrint = true;
                cout << n << endl; break;
            }
        }
        if (isPrint == false) cout << int_max << endl;
    }
    return 0;
}