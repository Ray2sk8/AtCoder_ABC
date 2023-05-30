#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int N;
string s;

int main() {

    cin >> N;
    cin >> s;
    bool ball = false;
    int level = 0;
    int ans = -1;

    N = s.size();
    for (int i = 0; i < N; i++) {
        switch (s[i]) {
        case 'o':
            if (ball == false) {
                // ボール start

                ball = true;
                level++;
            } else if (ball == true) {
                // Lv上げ中
                level++;
            }
            break;

        case '-':
            if (ball == true) {
                //くしざき

                ball = false;
                // if(ball_end - ball_start == level){
                //     // cout << "bingo:" << level << endl;
                // }

                // 最大値更新 
                ans = max(level, ans);
            }
            level = 0;
            break;

        default:
            break;
        }
    }

    cout << ans << endl;

    return 0;
}