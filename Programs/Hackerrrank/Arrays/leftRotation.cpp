#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> rotateLeft(int d, vector<int> arr) {
    for (int i = 0; i < d; i++) {
        arr.push_back(arr[i]);
    }

    vector<int> temp((arr.size() - d));
    copy((arr.begin() + d), arr.end(), temp.begin());  

    return temp;  
}