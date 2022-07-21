#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool arr[10000001];

bool isPrimtDigit(int n)
{
    int sum = 0;
    while (n) {
        if (n % 10 != 2 && n % 10 != 3 && n % 10 != 5 && n % 10 != 7) return false;
        sum += n % 10;
        n /= 10;
    }
    if (arr[sum] != true) return false;
    return true;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b; cin >> a >> b;

    for (int i = 0; i <= b; i++) arr[i] = true;
    for (int i = 2; i <= sqrt(b); i++)
        if (arr[i] == true)
            for (int j = i * i; j <= b; j += i) arr[j] = false;

    int cnt = 0;
    for (int i = a; i <= b; i++)
        if (isPrimtDigit(i) && arr[i]) cnt++;
    cout << cnt;
    return 0;
}