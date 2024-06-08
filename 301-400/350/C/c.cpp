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
    int num = 0;

    for (int i = 1; i <= N; ++i) {
        int target = i;
        // targetが配列通りか
        if (A[target] != target) {
            // targetの位置
            int p = pos[target]; // target,p で入れ替え
            // 入れ替えの数字
            int B = A[p];
            V.push_back(make_pair(target, p));
            // 入れ替え
            int a = A[target];
            int b = B;
            int b_pos = p;
            
        }
    }

    return 0;
}
