#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool maxElement(int i, int j) {
    return i < j;    
}

string splitSpace(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            string subs = s.substr((i + 1), (s.length() - 1));
            return subs;
        }
    }
}

vector<int> getMax(vector<string> operations) {
    vector<int> stack;
    vector<int> maxNos;
    for (int i = 0; i < operations.size(); i++) {
        string s = operations[i];
        if (s[0] == '1') {
            stack.push_back(stoi(splitSpace(s)));
        } else if (s[0] == '2') {
            stack.pop_back();
        } else {
            int maxN = *max_element(stack.begin(), stack.end());
            maxNos.push_back(maxN);
        }
    }
    
    return maxNos;
}
