#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool arr[1000001];

int main() {
    for (int i = 2; i <= 1000000; i++) arr[i] = true;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    for (int i = 2; i <= 1000; i++)
        if (arr[i] == true)
            for (int j = i * i; j <= 1000000; j += i) arr[j] = false;
    int n_test; cin >> n_test;
    while (n_test--)
    {
        int n; cin >> n;
        if (arr[n] == true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}