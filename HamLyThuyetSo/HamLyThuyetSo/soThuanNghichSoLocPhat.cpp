#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool condition1(long long n)
{
    int sumDigit = 0;
    bool isSix = false;
    while (n) {
        if (n % 10 == 6) isSix = true;
        sumDigit += n % 10;
        n /= 10;
    }
    if (isSix == false || sumDigit % 10 != 8) return false;
    return true;
}

bool condition2(long long n)
{
    string s = to_string(n);
    string tmp = s;
    reverse(tmp.begin(), tmp.end());
    return s == tmp;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long a, b; cin >> a >> b;
    for (int i = a; i <= b; i++)
        if (condition1(i) && condition2(i)) cout << i << " ";
    return 0;
}