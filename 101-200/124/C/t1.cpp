// chatGPT

#include <bits/stdc++.h>

using namespace std;

int main() {
    string S;
    cin >> S;

    int cnt = 0;
    for (int i = 1; i < S.length(); i++) {
        if (S[i] == S[i-1]) {
            S[i] = S[i] == '0' ? '1' : '0';
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}
