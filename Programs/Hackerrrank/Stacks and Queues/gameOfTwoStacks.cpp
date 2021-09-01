#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int twoStacks(int maxSum, vector<int> a, vector<int> b) {
    int sumSelections = 0;
    int n = 0;

    while (sumSelections < maxSum) {
        int minimum = min(a[0], b[0]);
        sumSelections += minimum;
        n++;

        if (minimum == a[0]) {
            auto itn = a.begin();
            a.erase(itn);
        } else {
            auto itn = b.begin();
            b.erase(itn);
        }
    }

    return n;
}

int twoStacks(int maxSum, vector<int> a, vector<int> b) {
    int n, temp, lastA = 0;

    for (int i = 0; i < a.size(); i++) {
        if ((temp + a[i]) <= maxSum) {
            lastA = i;
            temp += a[i];
            n++;
        }
    }

    for (int i = 0; i < b.size(); i++) {
        temp += b[i];
        n++;
        while ((lastA > 0) && (temp > maxSum)) {
            temp -= a[lastA];
            lastA--;
            n--;
        }
    }

    return n;
}
