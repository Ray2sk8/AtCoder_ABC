#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    int N;
    cin >> N;
    vector<pair<ll, ll>> K(N);
    map<ll, int> V;

    vector<int> NUM;
    vector<int> ans;

    for (int i = 0; i < N; i++) {
        int a, c;
        cin >> a >> c;
        K[i] = make_pair(a, c);
        //
        V[a] = i + 1;
    }

    //
    sort(K.begin(), K.end());
    int cost = K[N - 1].second;
    //
    for (int i = N - 1; i >= 0; i--) {
        if (cost >= K[i].second) {
            NUM.push_back(K[i].first);
            // コストの更新
            cost = K[i].second;
        }
    }

    cout << NUM.size() << endl;
    for (int i = NUM.size() - 1; i >= 0; i--) {
        int x = NUM[i];
        ans.push_back(V[x]);
    }

    sort(ans.begin(), ans.end());
    for(auto x:ans){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}