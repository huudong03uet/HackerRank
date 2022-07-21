#include <bits/stdc++.h>
using namespace std;
bool arr[10000001];

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    memset(arr, 1, 10000001);
    for (int i = 2; i <= sqrt(n); i++)
        if (arr[i] == true)
            for (int j = i * i; j <= n; j += i) arr[j] = false;
    for (int i = 2; i <= n; i++)
        if (arr[i]) cout << i << " ";

    return 0;
}