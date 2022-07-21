#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

const int mod = (int)1e9 + 7;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long n_test; cin >> n_test;
    long long sum = 1;
    while (n_test--)
    {
        long long p, e; cin >> p >> e;
        sum *= (e + 1);
        sum %= mod;
    }
    cout << sum;
    return 0;
}
