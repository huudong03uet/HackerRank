#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n_test; cin >> n_test;
    while (n_test--)
    {
        int arr[101][101] = { 0 };
        int arrRow[101] = { 0 }, arrColumns[101] = { 0 };
        int n; cin >> n;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            {
                int tmp; cin >> tmp;
                arrRow[i] += tmp;
                arrColumns[j] += tmp;
            }
        sort(arrRow, arrRow + n);
        sort(arrColumns, arrColumns + n);
        bool isPossible = true;
        for (int i = 0; i < n; i++)
            if (arrRow[i] != arrColumns[i]) {
                cout << "Impossible" << endl;
                isPossible = false; break;
            }

        if (isPossible == true) cout << "Possible" << endl;
    }
    return 0;
}