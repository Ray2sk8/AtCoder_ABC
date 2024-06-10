// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    string str;
    cin >> str;
    int str_size = str.size();

    set<string> v;
    for (int i = 1; i <= str_size; i++) {
        for (int j = 0; j < str_size; j++) {
            string s = str.substr(j, i);
            v.insert(s);
        }
    }

    ll ans = v.size();

    cout << ans << endl;

    return 0;
}
