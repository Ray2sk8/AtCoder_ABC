#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int N, Q;
    string S;
    cin >> N >> S >> Q;

    // 各文字の出現位置を記録するマップ
    unordered_map<char, vector<int>> charPositions;
    for (int i = 0; i < N; ++i) {
        charPositions[S[i]].push_back(i);
    }

    // 置き換え操作を読み込み、各文字の出現位置を更新する
    for (int i = 0; i < Q; ++i) {
        char c, d;
        cin >> c >> d;
        if (charPositions.find(c) != charPositions.end()) {
            for (int pos : charPositions[c]) {
                S[pos] = d;
                charPositions[d].push_back(pos);
            }
            charPositions.erase(c);
        }
    }

    cout << S << endl;

    return 0;
}
