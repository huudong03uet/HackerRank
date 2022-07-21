#include <iostream>
#include <vector>
using namespace std;

int designerPdfViewer(vector<int> h, string word) {
    int length_max = 0;
    for (int i = 0; i < word.length(); i++)
        if (length_max < h[word[i] - 'a']) length_max = h[word[i] - 'a'];
    return length_max * word.length();
}
