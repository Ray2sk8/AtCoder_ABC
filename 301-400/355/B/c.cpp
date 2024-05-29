#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    vector<int> B(M);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < M; i++) {
        cin >> B[i];
    }

    vector<int> C;
    C.reserve(N + M); // 最適化のために事前に容量を確保

    C.insert(C.end(), A.begin(), A.end());
    C.insert(C.end(), B.begin(), B.end());

    sort(C.begin(), C.end());

    // Aの要素が2つ連続するかどうかの判定
    for (int i = 1; i < C.size(); i++) {
        if (find(A.begin(), A.end(), C[i-1]) != A.end() && find(A.begin(), A.end(), C[i]) != A.end()) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}
