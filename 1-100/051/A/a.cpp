#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int N = 100;
    char s[N];

    cin >> s;

    int i = 0;
    while ( i < 19) {
        if (s[i] == ',') {
            cout << " ";
        } else {
            cout << s[i];
        }
        i++;
    }

    cout << endl;

    return 0;
}