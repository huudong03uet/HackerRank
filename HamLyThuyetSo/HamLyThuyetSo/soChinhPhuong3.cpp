#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long a, b; cin >> a >> b;
    long long tmp = floor(sqrt(b)) - ceil(sqrt(a)) + 1;
    cout << tmp;
    return 0;
}