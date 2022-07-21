#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
const int mod = 1e9 + 7;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map<int, int> mp;
    int n; cin >> n;
    for (int i = 2; i <= n; i++) {
        int number = i;
        for (int j = 2; j <= sqrt(number); j++) {
            while (number % j == 0) {
                mp[j]++; number /= j;
            }
        }
        if (number != 1) mp[number]++;
    }
    long long result = 1;
    for (auto i : mp) {
        result *= (i.second + 1);
        result %= mod;
    }
    cout << result;
    return 0;
}