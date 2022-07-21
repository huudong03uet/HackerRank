#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long n; cin >> n;
    long long cnt = 0;
    for (long long i = 1; i < sqrt(n); i++)
        if (n % i == 0) cnt += 2;
    if ((long long)sqrt(n) * (long long)sqrt(n) == n) cnt++;
    cout << cnt;
    return 0;
}