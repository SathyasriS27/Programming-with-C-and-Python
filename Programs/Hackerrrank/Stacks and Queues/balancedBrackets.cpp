#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string isBalanced(string s) {
    stack<char> brackets;
    vector<char> open = {'{', '[', '('};
    vector<char> close = {'}', ']', ')'};
    map<char, char> brack;
    brack['{'] = '}';
    brack['['] = ']';
    brack['('] = ')';

    for (int i = 0; i < s.length(); i++) {
        auto itn = find(open.begin(), open.end(), s[i]);
        if (itn != open.end()) {
            brackets.push(s[i]);
        } else if (itn != close.end()) {
            if (brackets.size() == 0) {
                return "NO";
            } else {
                if (brack[brackets.top()] == s[i]) {
                    brackets.pop();
                } else {
                    return "NO";
                }
            }
        }
    }

    if (brackets.size() == 0) {
        return "YES";
    }

    return "NO";
}