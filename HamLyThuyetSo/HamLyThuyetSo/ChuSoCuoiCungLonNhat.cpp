#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool arr[10000001];
int cnt[10];
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;

    for (int i = 2; i <= n; i++) arr[i] = true;
    for (int i = 2; i <= sqrt(n); i++)
        if (arr[i] == true)
            for (int j = i * i; j <= n; j += i) arr[j] = false;
    for (int i = 2; i <= n; i++)
        if (arr[i] == true) {
            cout << i << " ";
            cnt[i % 10]++;
        }
    cout << endl;
    for (int i = 9; i >= 0; i++)
        if (cnt[i] != 0) {
            cout << cnt[i]; break;
        }
    return 0;
}