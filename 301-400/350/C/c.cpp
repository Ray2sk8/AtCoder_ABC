#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    // sort
    vector<int> A(N + 1);
    // 数字がどこにあるか
    vector<int> pos(N + 1);
    for (int i = 1; i <= N; ++i) {
        cin >> A[i];
        pos[A[i]] = i;
    }

    vector<pair<int, int>> V;

    for (int i = 1; i < N; ++i) {
        // targetが配列通りか
        if (A[i] != i) {
            // 調べているAの位置
            int p_A = pos[i]; // i に A[p_A] がある
            V.push_back(make_pair(i, p_A));

            pos[A[i]] = i;
            pos[A[p_A]] = p_A;
            swap(A[i], A[p_A]);
        }
    }

    if (V.size() > 0) {
        for (auto x : V) {
            cout << x.first << " " << x.second << endl;
        }
    } else {
        cout << 0 << endl;
    }

    return 0;
}
