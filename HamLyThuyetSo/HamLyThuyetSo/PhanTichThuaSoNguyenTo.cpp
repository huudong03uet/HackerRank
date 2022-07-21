#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long n; cin >> n;
    map<long long, long long> mp;
    long long divisor = 2;
    while (n != 1) {
        while (n % divisor == 0) {
            mp[divisor]++;
            n /= divisor;
        }
        divisor++;
        if (divisor > sqrt(n) && n != 1)
        {
            mp[n]++; break;
        }

    }
    long long cnt = 0;
    for (auto i : mp)
    {
        cnt++;
        cout << i.first << "^" << i.second;
        if (cnt != mp.size()) cout << " * ";
    }
    return 0;
}