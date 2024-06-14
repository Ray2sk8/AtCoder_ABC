// WA
#include <iostream>
#include <vector>

using namespace std;

struct DATA {
    int a;
    int pos;
};

int main() {
    int N;
    cin >> N;

    // 数字がどこにあるか
    vector<DATA> A(N + 1);
    for (int i = 1; i <= N; i++) {
        cin >> A[i].a;
        int j = A[i].a;
        A[j].pos = i;
    }

    vector<pair<int, int>> V;
    for (int i = 1; i < N; ++i) {
        // targetが配列通りか
        int target = A[i].a;
        if (target != i) {
            // 調べているAの位置
            int p_A = A[i].pos; // pos番目 に 数字 i がある

            V.push_back(make_pair(i, p_A));
            // 更新
            swap(A[i], A[p_A]);
        }
    }

    cout << V.size() << endl;
    if (V.size() != 0) {
        for (auto x : V) {
            cout << x.first << " " << x.second << endl;
        }
    }

    return 0;
}
