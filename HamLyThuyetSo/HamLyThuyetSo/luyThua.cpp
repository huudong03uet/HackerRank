#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
const long long mod = 1e9 + 7;

int main() {
    long long a, b; cin >> a >> b;
    a %= mod;
    long long result = 1;
    while (b) {
        if (b % 2 == 1) result *= a;
        a *= a;
        b /= 2;
        a %= mod;
        result %= mod;
    }
    cout << result;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}