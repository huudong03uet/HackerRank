#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'isValid' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string isValid(string s) {
    map<char, int> mp;
    map<int, int> cnt;
    int num1 = -1, num2 = -1;
    for (int i = 0; i < s.length(); i++) mp[s[i]]++;
    for (auto i : mp)
    {
        cnt[i.second]++;
    }
    if (cnt.size() > 2) return "NO";
    if (cnt.size() == 1) return "YES";

    int index = 0;
    int arr1[10], arr2[10];
    for (auto i : cnt)
    {
        arr1[index] = i.first;
        arr2[index] = i.second;
        index++;
    }
    if (cnt[1] == 1) return "YES";
    if (arr2[1] == 1 && arr1[1] - arr1[0] == 1) return "YES";
    if (arr2[0] == 1 && arr1[0] - arr1[1] == 1) return "YES";
}
int main()
{
    string s; cin >> s;
    cout << isValid(s);

    return 0;
}
