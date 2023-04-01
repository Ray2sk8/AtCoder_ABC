// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    string s;
    int N;
    cin >> N >> s;
    int Max = -1 << 5;
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        if (s[i] == 'I') {
            cnt++;
        } else if (s[i] == 'D') {
            Max = max(Max, cnt);
            cnt--;
        }
    }
    Max = max(Max, cnt);
    cout << Max << endl;

    return 0;
}
