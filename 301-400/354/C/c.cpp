#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<pair<ll, ll>> K(N); // カードの (強さ, コスト)
    vector<pair<ll, int>> indexed_cards(N); // (強さ, 元のインデックス)
    vector<int> result; // 捨てられないカードのインデックス

    // 入力を受け取る
    for (int i = 0; i < N; i++) {
        ll a, c;
        cin >> a >> c;
        K[i] = {a, c};
        indexed_cards[i] = {a, i};
    }

    // カードを強さで昇順にソートし、同じ強さならコストで降順にソートする
    sort(indexed_cards.begin(), indexed_cards.end(), [&](pair<ll, int> a, pair<ll, int> b) {
        if (K[a.second].first != K[b.second].first)
            return K[a.second].first < K[b.second].first; // 強さで昇順
        return K[a.second].second > K[b.second].second;  // 同じ強さならコストで降順
    });

    ll min_cost = LLONG_MAX;

    // 強さが低い順に見ていき、捨てられないカードを選ぶ
    for (auto& p : indexed_cards) {
        int idx = p.second;
        if (K[idx].second < min_cost) {
            result.push_back(idx);
            min_cost = K[idx].second;
        }
    }

    // 結果のインデックスを昇順に並べる
    sort(result.begin(), result.end());

    // 結果を出力する
    cout << result.size() << endl;
    for (int i : result) {
        cout << i + 1 << " "; // インデックスを1ベースに戻して出力
    }
    cout << endl;

    return 0;
}
