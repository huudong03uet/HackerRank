#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int sum(int n) {
    if (n == 1) return 1;
    else return n + sum(n - 1);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    cout << sum(n);
    return 0;
}
