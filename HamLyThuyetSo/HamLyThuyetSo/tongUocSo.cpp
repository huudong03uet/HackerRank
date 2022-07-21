#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long n; cin >> n;
    long long sum = 0;
    for (int i = 1; i < sqrt(n); i++)
        if (n % i == 0) sum += (i + n / i);

    if ((int)sqrt(n) * (int)sqrt(n) == n) sum += sqrt(n);
    cout << sum;
    return 0;
}