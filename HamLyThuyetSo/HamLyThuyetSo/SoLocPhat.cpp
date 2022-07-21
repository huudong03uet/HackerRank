#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool check(string s)
{
    for (int i = 0; i < s.length(); i++)
        if (s[i] != '6' && s[i] != '8' && s[i] != '0') return false;
    return true;
}

int main() {
    string s; cin >> s;
    if (check(s)) cout << 1;
    else cout << 0;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}