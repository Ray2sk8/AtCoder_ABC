#include <bits/stdc++.h>

using namespace std;
using ll = long long;

string s;

int main() {

    ll ans = 0;
    cin >> s;
    // ll N = s.length();
    int i = 0;
    char chrFlg = s[i];
    int flg = chrFlg - '0';

    while (s[i] != '\0') {
        chrFlg = flg + '0';

        if (s[i] == chrFlg) {  // okのとき
            flg = (++flg) % 2; // 次のflg
            //cout << flg << " s:" << s[i] << " flg:" << flg << endl;
        } else if (s[i] == '0' || s[i] == '1') { // NG
            s[i] = (flg + 1) % 2;
            flg = (++flg) % 2; // 次のflg
            ans++;
            // char o = s[i];
            // cout << "i[" << i << "] s:" << o << endl;
        } else {
            // cout << "invalid error." << endl;
        }

        // cout << "flg:" << flg << endl;
        i++;
    }

    cout << ans << endl;

    return 0;
}