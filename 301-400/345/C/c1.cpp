#include <iostream>
#include <string>
#include <vector>

using namespace std;
using ll = long long;

int main() {
    string str;
    cin >> str;

    ll strsize = str.size();

    vector<ll> A(26, 0); // 英小文字の出現回数を記録するための配列
    vector<ll> B(26, 0);

    for (int i = 0; i < strsize; i++) {
        A[int(str[i] - 'a')]++;
        // cout << int(str[i] - 'a') << endl;
    }

    ll total_pairs = 0;

    // 異なる文字同士の組み合わせの数を計算
    for (int i = 0; i < 26; i++) {
        for (int j = i + 1; j < 26; j++) {
            B[i] += A[j];
        }
    }

    for (int i = 0; i < 26; i++) {
        total_pairs += A[i] * B[i];
    }

    if (total_pairs == 0) {
        total_pairs = 1;
    }

    cout << total_pairs << endl;

    return 0;
}
