#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    int N;
    long long ans = 0;
    cin >> N;
    vector<int> A(N + 1);
    vector<int> B(N + 1);
    vector<int> C(N + 1);
    // 入力
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }
    for (int i = 1; i <= N; i++) {
        cin >> B[i];
    }
    for (int i = 1; i <= N; i++) {
        cin >> C[i];
    }

    //Dを作る
    vector<int> D(N + 1);
    vector<int> cnt(N + 1);
    
    for (int i = 1; i <= N; i++) {
        D.at(i) = B.at(C.at(i));
        cnt.at(D.at(i))++;
    }

    for (int i = 1; i <= N; i++) {
        ans += cnt.at( A.at(i) );
    }

    cout << ans << endl;

    return 0;
}