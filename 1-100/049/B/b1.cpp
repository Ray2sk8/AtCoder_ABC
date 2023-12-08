// #include <iostream>
#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {

    ll H, W;
    cin >> H >> W;

    vector<string> s(H + 1);

    for (int i = 1; i <= H; i++) {
        cin >> s.at(i);
    }

    for (int i = 0; i <= H; i++) {
        cout << s.at(i) << endl;
        cout << s.at(i) << endl;
    }

    return 0;
}
