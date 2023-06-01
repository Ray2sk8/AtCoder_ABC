// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

string A, B;

int main() {
    cin >> A >> B;
    bool ans = false;

    if (A.size() > B.size()) {
        cout << "GREATER" << endl;
    } else if (A.size() < B.size()) {
        cout << "LESS" << endl;
    } else {
        for (int i = 0; i < A.size(); i++) {
            if (A[i] > B[i]) {
                cout << "GREATER" << endl;
                ans = true;
                break;
            } else if (A[i] < B[i]) {
                cout << "LESS" << endl;
                ans = true;
                break;
            }
        }
    }

    if(!ans){
        cout << "EQUAL" << endl;
    }

    return 0;
}
