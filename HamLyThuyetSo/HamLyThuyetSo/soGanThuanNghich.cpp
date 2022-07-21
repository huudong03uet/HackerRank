#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool isNumber(string s) {
    if (s[0] - '0' != 2 * (s[s.length() - 1] - '0') && 2 * (s[0] - '0') != s[s.length() - 1] - '0') return false;
    for (int i = 1; i < s.length() - 1; i++)
        if (s[i] != s[s.length() - i - 1]) return false;
    return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string n; cin >> n;
    if (isNumber(n)) cout << "YES";
    else cout << "NO";
    return 0;
}