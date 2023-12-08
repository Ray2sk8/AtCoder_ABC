//ChatGPT

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int ans = 0;
    char prev = '2'; // 初期値は0と1以外の文字
    for (char c : s) {
        if (c != '0' && c != '1') { // 0と1以外の文字が含まれている場合はエラー
            cerr << "Invalid input: " << c << endl;
            return 1;
        }
        
        if (prev == c) { // 隣接する文字が同じ場合は反転する必要がある
            c = (c == '0' ? '1' : '0');
            ans++;
        }
        prev = c;
    }

    cout << ans << endl;
    return 0;
}
