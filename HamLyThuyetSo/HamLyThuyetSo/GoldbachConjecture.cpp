#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool arr[1000001];

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    for (int i = 0; i <= 1000000; i++) arr[i] = true;

    for (int i = 2; i <= 1000; i++)
        if (arr[i] == true)
            for (int j = i * i; j <= 1000000; j += i) arr[j] = false;
    int n_test; cin >> n_test;
    while (n_test--)
    {
        int n; cin >> n;
        for (int i = 2; i <= n / 2; i++)
            if (arr[i] == true && arr[n - i] == true) cout << i << " " << n - i << endl;
    }
    return 0;
}
