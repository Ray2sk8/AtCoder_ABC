#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int INF = 1e5;

int main() {

    int N;
    cin >> N;
    vector<int> A(N,INF);
    vector<int> B(N - 1);

    for (int i = 0; i < N - 1; i++) {
        cin >> B[i];
    }

    for (int i = 0; i < N - 1; i++) {
        A[i] = min(A[i],B[i]);
        A[i+1] = min(A[i+1], B[i]);
    }

    int sum = 0;
    for(int i = 0; i<N; i++) {
        sum += A[i];
    }

    cout << sum << endl;

    return 0;
}