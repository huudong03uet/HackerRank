#include <iostream>
using namespace std;
const int mod = 1e9 + 7;
void extendedEuclid(int a, int b, int &x, int &y, int &gcdTwoNumber)
{
	if (b == 0) {
		x = 1; y = 0;  
		gcdTwoNumber = a;
	}
	else {
		extendedEuclid(b, a % b, x, y, gcdTwoNumber);
		int tmp = x;
		x = y;
		y = tmp - a / b * y;
	}
}
long long f[100001];
int main() {
	int a = 100, b = 3, x = 1, y = 1, gcdTwoNumber = 1;
	extendedEuclid(a, b, x, y, gcdTwoNumber);
	cout << a << endl << b << endl << x << endl << y << endl << gcdTwoNumber;
	return 0;
}