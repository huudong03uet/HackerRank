#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long sumOddEven(long long n) {
    if (n == 1) return -1;
    else if (n % 2 == 0) return sumOddEven(n - 1) + n;
    else return sumOddEven(n - 1) - n;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long n; cin >> n;

    cout << sumOddEven(n);
    return 0;
}
