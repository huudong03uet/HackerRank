#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Prlong long output to STDOUT */
    long long n, p;
    cin >> n >> p;
    long long n_pre = n;

    long long divisor = 1;
    long long cnt = 0;
    while (p != 1) {
        cnt = 0;
        divisor++;
        while (p % divisor == 0)
        {
            p /= divisor;
            cnt++;
        }
    }
    long long tmp = 0;
    for (long long i = 1; ; i++)
    {
        if (pow(divisor, i) <= n_pre) tmp += n_pre / pow(divisor, i);
        else break;
    }
    cout << tmp / cnt << endl;

    return 0;
}