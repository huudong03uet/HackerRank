#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s; cin >> s;
    map<int, int> mp;
    map<int, int> tmp;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '2' || s[i] == '3' || s[i] == '5' || s[i] == '7') {
            mp[(int)s[i]]++;

        }
    }
    for (auto i : mp) cout << (char)i.first << " " << i.second << endl;
    cout << endl;
    for (int i = 0; i < s.length(); i++)
        if (tmp[s[i]] == 0 && (s[i] == '2' || s[i] == '3' || s[i] == '5' || s[i] == '7')) {
            cout << s[i] << " " << mp[s[i]] << endl;
            tmp[s[i]]++;
        }
    return 0;
}