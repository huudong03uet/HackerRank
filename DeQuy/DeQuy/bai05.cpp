#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long mod = 1e9 + 7;
long long factor(long long n)
{
    if (n == 1) return 1;
    else {
        long long temp = factor(n - 1) % mod;
        return temp *= n;
    };
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long n; cin >> n;
    cout << factor(n) % mod;
    return 0;
}
