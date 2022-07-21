#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long sumPow(long long n) {
    if (n == 1) return 1;
    else return sumPow(n - 1) + n * n * n;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long n; cin >> n;
    cout << sumPow(n);
    return 0;
}
