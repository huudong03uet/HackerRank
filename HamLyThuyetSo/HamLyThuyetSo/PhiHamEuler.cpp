#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <set>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long n; cin >> n; long long tmp = n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0) {
            while (n % i == 0) n /= i;
            tmp -= tmp / i;
        }
    }
    if (n != 1) tmp -= tmp / n;
    cout << tmp;
    return 0;
}