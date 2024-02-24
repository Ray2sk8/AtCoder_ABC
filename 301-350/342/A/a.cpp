#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    char first_char = s[0]; // 最初の文字を取得
    char second_char = NULL;
    int different_char_index =
        -1; // 異なる文字が見つかった場所のインデックス、初期値は-1で設定
    int flg_2nd_char = 0;
    int judge_char = 0;

    // 文字列を走査して異なる文字が見つかるかチェック
    for (int i = 1; i < s.size(); ++i) {
        // 1st と　違う文字のとき
        if (s[i] != first_char) {
            if (second_char == NULL) {
                second_char = s[i];
                flg_2nd_char = i;
            } else {
                judge_char = 1;
                // break;
            }

        } else {
            // 1st と同じ
            if (i >= 1) {
                judge_char = 2;
                if (second_char != NULL) {
                    break;
                }
            }
        }
    }

    if (judge_char == 1) {
        cout << 1 << endl;
    } else {
        cout << flg_2nd_char + 1 << endl;
    }

    return 0;
}
