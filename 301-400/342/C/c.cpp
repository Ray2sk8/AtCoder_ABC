#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    int N;
    cin >> N;

    string str, ans;
    string pre = "abcdefghijklmnopqrstuvwxyz";
    string after = "abcdefghijklmnopqrstuvwxyz";
    cin >> str;
    ans = str;

    int size_str = str.size();

    int Q;
    cin >> Q;

    vector<char> c(Q);
    vector<char> d(Q);
    for (int i = 0; i < Q; i++) {
        cin >> c[i] >> d[i];
    }

    for (int i = 0; i < Q; i++) {
        for (int j = 0; j < 26; j++) {
            // cout << i << " " << j << " " << pre[j] << endl;
            if (after[j] == c[i]) {
                after[j] = d[i];
            }
        }
    }

    for (int i = 0; i < size_str; i++) {
        for (int j = 0; j < 26; j++) {
            if (pre[j] == str[i]) {
                ans[i] = after[j];
            }
        }
    }

    // cout << pre << endl;
    // cout << after << endl;

    cout << ans << endl;

    return 0;
}