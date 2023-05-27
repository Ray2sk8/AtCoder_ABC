#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int N;
string s, s1;

int main() {

    cin >> N;
    cin >> s >> s1;

    bool flg = true;
    for (int i = 0; i < N; i++) {
        // cout << "i:" << i << " "<< s[i] << " " << s1[i] << endl;
        if (s[i] != s1[i]) {
            if ( (s[i] == '1'&& s1[i] =='l') || (s[i] == 'l'&& s1[i] =='1')) {
                // cout << "1 l" << endl;
            } else if ( (s[i] == '0'&& s1[i] =='o') || (s[i] == 'o'&& s1[i] =='0') ) {
                // cout << "0 o" << endl;
            } else {
                // 文字が違いかつ似た数字でない
                flg = false;
                break;
            }
        }
    }

    if(flg){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}