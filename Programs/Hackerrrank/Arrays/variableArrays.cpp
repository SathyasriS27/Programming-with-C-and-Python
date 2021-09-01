#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, q;
    
    cin >> n >> q;
    vector<vector<int>> arr;
    
    for (int i = 0; i < n; i++) {
        int len;
        vector<int> innerArr;
        cin >> len;
        for (int j = 0; j < len; j++) {
            int temp;
            cin >> temp;
            innerArr.push_back(temp);
        }
        arr.push_back(innerArr);
    }  
    
    for (int i = 0; i < q; i++) {
        int ind1, ind2;
        cin >> ind1 >> ind2;
        
        cout << arr[ind1][ind2] << endl;
    }
    return 0;
}