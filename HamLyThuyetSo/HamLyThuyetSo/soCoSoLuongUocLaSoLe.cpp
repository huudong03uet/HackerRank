#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long n; cin >> n;
    if ((long long)sqrt(n) * (long long)sqrt(n) == n) cout << "YES";
    else cout << "NO";
    return 0;
}