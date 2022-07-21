#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int isPrime(int a, int b) {
    if (b == 0) return a;
    else return isPrime(b, a % b);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b; cin >> a >> b;

    for (int i = a; i <= b; i++)
        for (int j = i + 1; j <= b; j++)
            if (isPrime(i, j) == 1) cout << "(" << i << "," << j << ")" << endl;
    return 0;
}
