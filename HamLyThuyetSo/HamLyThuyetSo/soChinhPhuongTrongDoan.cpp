#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long a, b; cin >> a >> b;
    for (long long i = ceil(sqrt(a)); i <= floor(sqrt(b)); i++) cout << i * i << " ";
    return 0;
}