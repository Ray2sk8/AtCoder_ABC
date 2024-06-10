// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    string S, T;
    cin >> S >> T;

    int s_size = S.size();
    int t_size = T.size();

    vector<int> ans;

    for (int i = 0; i < s_size;) {
        for (int j = 0; j < t_size; j++) {
            if (S[i] == T[j]) {
                // 一致
                ans.push_back(j);
                i++;
            }
        }
    }

    for (auto x : ans) {
        cout << x+1 << " ";
    }
    cout << endl;

    return 0;
}
