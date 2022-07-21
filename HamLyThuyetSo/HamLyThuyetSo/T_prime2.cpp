#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool arr[1000001];

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long n; cin >> n;
    long long sqrt_n = sqrt(n);
    for (int i = 0; i <= sqrt_n; i++) arr[i] = true;


    for (int i = 2; i <= sqrt(sqrt_n); i++)
        if (arr[i] == true)
            for (int j = i * i; j <= sqrt_n; j += i) arr[j] = false;
    int cnt = 0;
    for (int i = 2; i <= sqrt_n; i++)
        if (arr[i]) cnt++;
    cout << cnt;
    return 0;
}