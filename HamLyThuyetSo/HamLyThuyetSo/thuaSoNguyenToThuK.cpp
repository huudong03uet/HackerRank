#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, k, cnt = 0; cin >> n >> k;
    for (int i = 2; i <= sqrt(n); i++)
        while (n % i == 0) {
            cnt++; n /= i;
            if (cnt == k) {
                cout << i; return 0;
            }
        }
    if (n != 1 && cnt + 1 == k) cout << n;
    else cout << -1;
    return 0;
}