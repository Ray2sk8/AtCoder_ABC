// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll N, L;
    cin >> N >> L;
    vector<string> str(N);
    for (int i = 0; i < N; i++) {
        cin >> str[i];
    }

    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1; j++) {
            if (str[j] > str[j+1]) {
                // swap string
                string str_tmp;
                str_tmp = str[j];
                str[j] = str[j+1];
                str[j+1] = str_tmp;
            }
        }
    }

    string ans = {};
    for(int i = 0; i < N; i++) {
        ans += str[i];
    }

    cout << ans << endl;

    // //output string lines
    // cout << endl;
    // for (int i = 0; i < N; i++) {
    //     cout << str[i] << endl;
    // }

    return 0;
}
