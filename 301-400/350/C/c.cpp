#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    vector<pair<int, int>> operations;
    for (int i = 0; i < N; ++i) {
        int target = i + 1;
        if (A[i] != target) {
            // A[i] が target でない場合、A[i] と target の位置を交換する必要がある
            int pos = -1;
            for (int j = i + 1; j < N; ++j) {
                if (A[j] == target) {
                    pos = j;
                    break;
                }
            }
            // 位置 pos と位置 i の要素を交換する
            swap(A[i], A[pos]);
            operations.emplace_back(i + 1, pos + 1);
        }
    }

    cout << operations.size() << endl;
    for (const auto& op : operations) {
        cout << op.first << " " << op.second << endl;
    }

    return 0;
}
