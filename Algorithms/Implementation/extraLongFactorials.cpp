#include <bits/stdc++.h>
using namespace std;
string sumTwoString(string a, string b)
{
    bool memory = false;
    if (a.length() < b.length())
    {
        swap(a, b);
    }
    string result = "";
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    for (int i = b.length(); i < a.length(); i++)
    {
        b.push_back('0');
    }
    for (int i = 0; i < b.length(); i++)
    {
        int tmp = a[i] + b[i] - '0' * 2;
        if (memory == true) tmp++;
        if (tmp >= 10)
        {
            memory = true;
            result += to_string(tmp - 10);
        }
        else
        {
            memory = false;
            result += to_string(tmp);
        }
    }
    if (memory == 1) result.push_back('1');
    reverse(result.begin(), result.end());
    return result;
}

string multiString(string s, int n)
{
    string start = s;
    for (int i = 1; i < n; i++)
    {
        s = sumTwoString(s, start);
    }
    return s;
}

void extraLongFactorials(int n) {
    string s = "1";
    for (int i = 2; i <= n; i++)
    {
        s = multiString(s, i);
    }
    cout << s;
}
int main() {
    int n; cin >> n;
    extraLongFactorials(n);
    return 0;
}