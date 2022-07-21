#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long sumOfSquare(long long n) {
    if (n == 1) return 1;
    else return sumOfSquare(n - 1) + n * n;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long n; cin >> n;
    cout << sumOfSquare(n);
    return 0;
}
