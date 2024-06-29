#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    string str;
    cin >> str;

    int n;
    string a = str.substr(3);

    n = stoi(a);

    // cout << n << endl;

    if (n <= 349 && n != 316 && n >= 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}