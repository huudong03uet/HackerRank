#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool arr[100001];
int divisor_min_(int n) {
    for (int i = 2; i <= n; i++)
        if (arr[i] == true && n % i == 0) return i;
    return 0;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    for (int i = 0; i <= n; i++) arr[i] = true;
    for (int i = 2; i <= sqrt(n); i++)
        if (arr[i] == true) for (int j = i * i; j <= n; j += i) arr[j] = false;
    cout << 1 << endl;
    for (int i = 2; i <= n; i++)
    {
        if (i % 2 == 0) cout << 2 << endl;
        else if (arr[i] == true) cout << i << endl;
        else cout << divisor_min_(i) << endl;
    }
    return 0;
}