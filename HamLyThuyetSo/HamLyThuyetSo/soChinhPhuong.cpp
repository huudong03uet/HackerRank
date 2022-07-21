#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long n; cin >> n;
    long long sqrt_n = sqrt(n);
    if (sqrt_n * sqrt_n == n) cout << "YES";
    else cout << "NO";
    return 0;
}