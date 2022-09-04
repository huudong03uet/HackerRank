#include <vector>
#include <algorithm>
using namespace std;
int longestIncreasingSubsequence(vector<int> arr) {
    int n = arr.size();
    vector<int> v(n, 1);
    int max_length = 0;
    for(int i = 1; i < n; i++) 
    {
        for(int j = 0; j < i; j++)
            if(arr[i] > arr[j])
            {
                v[i] = max(v[i], v[j] + 1);
                max_length = max(max_length, v[i]);
            }
    }
    return max_length;
    
}