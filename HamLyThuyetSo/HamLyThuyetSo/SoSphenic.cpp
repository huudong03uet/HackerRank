#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long n; cin >> n;
    vector<long long> v;
    long long index = 2;
    while (n != 1) {
        while (n % index == 0) {
            v.push_back(index);
            if (v.size() > 3) {
                cout << 0; return 0;
            }
            n /= index;
        }
        index++;
    }
    if (v.size() == 3) cout << 1;
    return 0;
}