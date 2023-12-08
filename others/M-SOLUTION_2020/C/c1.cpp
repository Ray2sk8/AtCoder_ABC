#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool biggerSum(ll f, ll sum, ll y) {
    ll sumNow = sum*y/f; 
    if (sum < sumNow ) { // 前よりも大きい
        return true;
    } else {
        return false;
    }
}


int main() {
    ll N, K;
    cin >> N >> K;
    vector<ll> A(N + 1);

    ll sumFormer = 1;
    for (int i = 1; i <= N; i++) {
        cin >> A.at(i);
        if (i <= K) {
            sumFormer = sumFormer * A.at(i);
        }
    }

    for (int i = K + 1; i <= N; i++) {
        if (biggerSum(A.at( i - K ), sumFormer, A.at(i))) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
        sumFormer = sumFormer/A.at( i - K )*A.at(i);
    }

    return 0;
}