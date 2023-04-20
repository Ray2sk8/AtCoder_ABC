#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
int N;
cin >> N;
    string s;
    cin >> s;

    bool huka = false;
    bool maru = false;

    for (int i = 0; i < N; i++) {
        switch (s[i]) {
        case 'x':
            huka = true;
            break;
        case 'o':
            maru = true;
            break;
        case '-': break;

            default:
            break;
        }
    }

    if(maru == true && huka != true){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}