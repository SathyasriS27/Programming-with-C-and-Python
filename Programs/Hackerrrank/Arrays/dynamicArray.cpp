#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, q;
    int lastAnswer = 0;
    vector<int> inner(1, 0);
    vector<vector<int>> arr(n, inner);
    vector<int> answers;

    cin >> n >> q;

    int idx;
    int qtype, x, y;
    int tempArr[n];
    for (int i = 0; i < q; i++) {
        cin >> qtype >> x >> y;
        idx = ((x ^ lastAnswer) % n);
        
        if (qtype == 1) {
            vector<int> tempArr = arr[idx];
            cout << "Entered if." << endl;
            tempArr.push_back(y);
            arr[idx] = tempArr;
            cout << "Completed if." << endl;
        } else {
            cout << "Enter else." << endl;
            lastAnswer = arr[idx][(y % arr[idx].size()) + 1];
            answers.push_back(lastAnswer);
            cout << "Completed else." << endl;
        }
        cout << "i: " << i << endl;
    }

    for (int i = 0; i < n; i++) {
        cout << answers[i] << endl;
    }
}