#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool arr[10000001];
int cnt;
bool check(int n)
{
    int max = n % 10;
    while (n) {
        if (max < n % 10) return false;
        n /= 10;
    }
    return true;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;

    for (int i = 2; i <= n; i++) arr[i] = true;
    for (int i = 2; i <= sqrt(n); i++)
        if (arr[i] == true)
            for (int j = i * i; j <= n; j += i) arr[j] = false;
    for (int i = 2; i <= n; i++)
        if (arr[i] == true && check(i)) {
            cout << i << " "; cnt++;
        }
    cout << endl << cnt;
    return 0;
}