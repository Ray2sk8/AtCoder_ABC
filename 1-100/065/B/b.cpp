// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    int N;
    cin >> N;
    vector<int> A(N + 1);
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    vector<int> B;

    int num = 1;
    int cnt = 0;
    bool flg = false;
    for (int i = 0; i <= N; i++) {
        auto result = find(B.begin(), B.end(), num);
        if (result == B.end()) {
            // ループじゃない
            B.push_back(num);
            cnt++;
            if (A[num] == 2) {
                cout << cnt << endl;
                break;
            } else {
                num = A[num];
            }
        } else {
            cout << -1 << endl;
            break;
        }
    }

    return 0;
}
