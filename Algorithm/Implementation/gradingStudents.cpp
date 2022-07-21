#include <bits/stdc++.h>
using namespace std;
vector<int> gradingStudents(vector<int> grades) {
    vector<int> v;
    for (int i = 0; i < grades.size(); i++)
    {
        if (grades[i] < 38) v.push_back(grades[i]);
        else if (grades[i] % 5 == 3 || grades[i] % 5 == 4) v.push_back(ceil(grades[i] / 5.0) * 5);
        else v.push_back(grades[i]);
    }
    return v;
}
