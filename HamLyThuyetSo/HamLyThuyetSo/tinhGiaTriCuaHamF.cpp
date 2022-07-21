#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long n; cin >> n;
    if (n % 2 == 0) cout << n / 2;
    else cout << n * -1 / 2 - 1;
    return 0;
}