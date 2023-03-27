#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> s(100000);

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        s.at(a).push_back(1);
    }

    int ans = 0;
    for (auto x : s) {
        ans += x.size() / 2;
    }
    cout << ans << endl;
}
