#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int s_length_ = s.length();
    int s_floor = (int)sqrt(s_length_);
    int s_ceil = ceil(sqrt(s_length_));
    if (s_ceil * s_floor < s_length_) s_floor++;

    string* ss = new string[s_floor];
    for (int i = 0; i < s_floor; i++)
        ss[i] = s.substr(i * s_ceil, s_ceil);


    for (int i = 0; i < s_ceil; i++)
    {
        for (int j = 0; j < s_floor; j++)
        {
            if (i >= ss[s_floor - 1].length() && j == (s_floor - 1)) continue;
            cout << ss[j][i];
        }
        cout << " ";
    }
    return 0;
}
