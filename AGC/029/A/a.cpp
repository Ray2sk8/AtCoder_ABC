#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    string str;
    cin >> str;
    ll n = str.size();
    ll cnt = 0;

    for (int i = 0; i < n - 1; i++) {
        if (str[i] == 'B' && str[i + 1] == 'W') {
            str[i + 1] = 'B';
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}