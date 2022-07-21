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
    return a * b / gcd(a, b);
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long x, y, z, n;
    cin >> x >> y >> z >> n;
    long long lcmTwoNumber = lcm(x, y);
    long long lcmThreeNumber = lcm(lcmTwoNumber, z);
    long long resultsDivision = ceil(pow(10, n - 1) / lcmThreeNumber);
    if (resultsDivision * lcmThreeNumber > pow(10, n) - 1) cout << -1;
    else cout << resultsDivision * lcmThreeNumber;
    return 0;
}