#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
const int mod = 1e9 + 7;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long n; cin >> n;
    long long* arrOdd = new long long[n + 2];
    long long* arrEven = new long long[n + 2];
    arrOdd[0] = 0; arrOdd[1] = 1;
    for (long long i = 1; i <= n; i++) {
        arrOdd[0] = 0; arrEven[0] = 0;
        for (long long j = 1; j <= i; j++) {
            if (i % 2 == 1) {
                arrEven[j] = (arrOdd[j - 1] + arrOdd[j]) % mod;
                cout << arrEven[j] << " ";
            }
            else {
                arrOdd[j] = (arrEven[j - 1] + arrEven[j]) % mod;
                cout << arrOdd[j] << " ";
            }
        }
        arrOdd[i + 1] = 0; arrEven[i + 1] = 0;
        cout << endl;
    }
    return 0;
}