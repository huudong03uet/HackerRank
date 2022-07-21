#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int sumDigit(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map<int, int> mp;
    int n; cin >> n;
    int tmp = n;
    int divisor = 2;
    bool isPrime = true;

    while (n != 1) {
        while (n % divisor == 0) {
            n /= divisor;
            mp[divisor]++;
            isPrime = false;
        }
        divisor++;
        if (divisor > sqrt(n) && isPrime == true) {
            cout << "NO"; return 0;
        }
    }

    int sumDigitPrime = 0;
    for (auto i : mp) sumDigitPrime += i.second * sumDigit(i.first);

    if (sumDigitPrime == sumDigit(tmp)) cout << "YES";
    else cout << "NO";
    return 0;
}