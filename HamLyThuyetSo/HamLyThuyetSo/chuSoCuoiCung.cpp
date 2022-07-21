#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long n; cin >> n;
    long long results = 1;
    long long number = 8;
    while (n) {
        if (n % 2 == 1) results *= number;
        n /= 2;
        number *= number;
        number %= 10;
        results %= 10;

    }
    cout << results;
    return 0;
}
