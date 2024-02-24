#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int N, Q;
    string s;
    cin >> N >> s >> Q;

    // 各文字の出現回数を記録するマップ
    unordered_map<char, int> charCount;
    for (char ch : s) {
        charCount[ch]++;
    }



    // 置き換え操作を読み込み、各文字の出現回数を更新する
    for (int i = 0; i < Q; ++i) {
        char c, d;
        cin >> c >> d;
        // 文字 c の出現回数を文字 d の出現回数に加算し、文字 c の出現回数をゼロにする
        charCount[d] += charCount[c];
        charCount[c] = 0;
    }

    // 最終的な文字列を構築する
    string result;
    
    for(int i=0; i<N; i++){
        if(charCount[s[i]] > 0){
            result[]
        }
    }
    
    for (char ch : s) {
        // 文字 ch の出現回数が 0 でない場合は、その回数だけ文字を結果に追加する
        if (charCount[ch] > 0) {
            result += ch;
        }
    }

    cout << result << endl;

    return 0;
}
