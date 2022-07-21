#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long n; cin >> n;
    for (long long i = 1; i <= n; i++)
        cout << i * i * (i * i - 1) / 2 - (4 * i * i - 12 * i + 8) << endl;
    return 0;
}