#include <iostream>
#include <vector>
#include <set>

using namespace std;
using ll = long long;

int main() {
    ll N, M, L;
    cin >> N;
    vector<ll> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    cin >> M;
    vector<ll> B(M);
    for (int i = 0; i < M; i++) {
        cin >> B[i];
    }

    cin >> L;
    vector<ll> C(L);
    for (int i = 0; i < L; i++) {
        cin >> C[i];
    }

    set<ll> sums;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            for (int k = 0; k < L; k++) {
                sums.insert(A[i] + B[j] + C[k]);
            }
        }
    }

    ll Q;
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        ll X;
        cin >> X;
        if (sums.find(X) != sums.end()) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
