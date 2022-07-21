#include <bits/stdc++.h>
using namespace std;

bool checkNumber(int n) {
    while (n) {
        if (n % 10 != 2 && n % 10 != 3 && n % 10 != 5 && n % 10 != 7) return false;
        n /= 10;
    }
    return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b; cin >> a >> b;
    bool* arr = new bool[b + 1];

    for (int i = 0; i <= b; i++) arr[i] = true;

    for (int i = 2; i <= sqrt(b); i++)
        if (arr[i] == true)
            for (int j = i * i; j <= b; j += i) arr[j] = false;

    int cnt = 0;
    for (int i = a; i <= b; i++)
        if (arr[i] == true && checkNumber(i) == true) cnt++;

    cout << cnt;

    delete[] arr;
    return 0;
}