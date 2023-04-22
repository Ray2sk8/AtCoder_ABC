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
    int ball_start;
    int ball_end;

    for (int i = 0; i <= N; i++) {
        switch (s[i]) {
        case 'o':
            if (ball == false) {
                // 初めてボール
                ball_start = i;
                ball = true;
                level++;
            } else if (ball == true) {
                // Lv上げ中
                level++;
            }
            break;
        case '-':
            if (ball == true) {
                ball_end = i;
                ball = false;
                if(ball_end - ball_start == level){
                    cout << "bingo:" << level << endl;
                }
                // くしざき
                if (level > ans) {
                    ans = level;
                }
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