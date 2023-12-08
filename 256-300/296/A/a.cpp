#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    int N;
    string s;
    cin >> N;
    cin >> s;

    // 1:M 2:F
    int ok = 0;
    bool ok1 = true;
    for (int i = 0; i < N; i++) {
        if (s[i] == 'M') {
            if (ok == 2 || ok == 0) {
                ok = 1;
            } else {
                ok1 = false;
                break;
            }
        } else if (s[i] == 'F') {
            if (ok == 1 || ok == 0) {
                ok = 2;
            } else {
                ok1 = false;
                break;

            }
        }
    }

    if(ok1 ){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }

    return 0;
}