#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    string str;
    cin >> str;

    ll strsize = str.size();

    vector<ll> A(27, 0);

    for (int i = 0; i < strsize; i++) {
        A[str[i] - 'a']++;
    }

    ll ans = 0;
    ll kumi = 0;
    vector<ll> num;

    for (int i = 0; i < 27; i++) {
        if (A[i] != 0) {
            kumi++;
            num.push_back(A[i]);
            // cout << to_string(i + '0') << " " << A[i] << endl;
        }
    }

    // アルファベット二つ選ぶ
    ans = kumi * (kumi - 1) / 2;

    if (kumi == 1) {
        // コーナーケース
        // すべて同じ文字
        ans = 1;
    } else {
        for (auto x : num) {
            ans *= x;
        }
    }

    cout << ans << endl;

    return 0;
}