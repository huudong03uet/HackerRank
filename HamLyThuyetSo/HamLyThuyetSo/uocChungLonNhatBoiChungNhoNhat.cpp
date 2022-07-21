#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long gcd(long long a, long long b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}
long long lcm(long long a, long long b) {
    return a / gcd(a, b) * b;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long a, b; cin >> a >> b;
    cout << gcd(a, b) << " " << lcm(a, b);
    return 0;
}