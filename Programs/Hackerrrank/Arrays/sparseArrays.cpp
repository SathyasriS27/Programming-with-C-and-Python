#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> sparseArrays(vector<int> strings, vector<int> queries) {
    vector<int> ans;

    for (int i = 0; i < queries.size(); i++) {
        int freq = count(strings.begin(), strings.end(), queries[i]);
        ans.push_back(freq);
    }

    return ans;
}