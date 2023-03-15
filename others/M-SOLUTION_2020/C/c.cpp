#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll N, K;
    cin >> N >> K;
    vector<ll> A(N + 1);
    vector<ll> sum(N + 1, 1);
    ll sumFormer = 1;
    for (int i = 1; i <= N; i++) {
        cin >> A.at(i);
        if( i <= K ){
            sumFormer *= A.at(i);
        }
        
    }

  

    for (int i = K; i <= N; i++) {
        for (int j = i; j >= i - K + 1; j--) {
            sum.at(i) *= A.at(j);
        }
        if (i <= K) {
            continue;
        } else {
            if (sum.at(i - 1) < sum.at(i)) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }


    return 0;
}