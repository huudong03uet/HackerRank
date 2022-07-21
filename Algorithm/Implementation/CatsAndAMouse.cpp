#include <iostream>
using namespace std;
string catAndMouse(int x, int y, int z) {
    if (abs(x - z) == abs(y - z)) return "Mouse C";
    else if (abs(x - z) > abs(y - z)) return "Cat B";
    else return "Cat A";
}