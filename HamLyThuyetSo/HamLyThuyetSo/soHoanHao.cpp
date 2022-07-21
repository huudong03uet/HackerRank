#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
string arr[10];
unsigned long long number[] = { 2, 3, 5, 7, 13, 17, 19 };
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    for (int i = 0; i < 7; i++) {
        long long tmp = pow(2, number[i] - 1) * (pow(2, number[i]) - 1);
        arr[i] = to_string(tmp);
    }
    arr[7] = "2305843008139952128";
    string n; cin >> n;
    for (int i = 0; i < 8; i++)
        if (arr[i] == n) {
            cout << "YES"; return 0;
        }
    cout << "NO";
    return 0;
}