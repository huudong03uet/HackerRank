#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool arr[1001];

bool check(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
        if (arr[i] == true && n % i == 0 && n % (i * i) == 0) return true;
    return false;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    for (int i = 2; i <= 1000; i++) arr[i] = true;
    for (int i = 2; i <= sqrt(1000); i++)
        for (int j = i * i; j <= 1000; j += i) arr[j] = false;
    int a, b; cin >> a >> b;
    if (a < 4) a = 4;
    for (int i = a; i <= b; i++)
        if (check(i)) cout << i << " ";

    return 0;
}