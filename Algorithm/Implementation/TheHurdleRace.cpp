#include <iostream>
using namespace std;
int hurdleRace(int k, vector<int> height) {
    int n_max = 0;
    for (int i = 0; i < height.size(); i++)
        if (height[i] > n_max) n_max = height[i];
    if (n_max < k) return 0;
    else return n_max - k;
}
