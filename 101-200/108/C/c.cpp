#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll N, K;
    cin >> N >> K;
    ll cnt = 0;

    for (int i = 1; i <= N; i++) {
        for (int j = i; j <= N; j++) {
            for (int k = j; k <= N; k++) {
                vector<int> v = {i, j, k};
                do {
                    int a = v[0] + v[1]; // a+b
                    int b = v[1] + v[2]; // c+b
                    int c = v[2] + v[0]; // c+a
                    // cout << "v[0]" << v[0] << " v[1]" << v[1] << " v[2]" <<
                    // v[2] << endl;
                    if (2*(v[0]+v[1]+v[2]) % K != 0) {
                        //条件を満たさない組み合わせ　break;
                        break;
                    } else if (a % K == 0 && b % K == 0 && c % K == 0) {
                        cnt++;
                        cout << "v[0]" << v[0] << " v[1]" << v[1] << " v[2]"
                             << v[2] << endl;
                        // break;
                    }
                } while (next_permutation(v.begin(), v.end()));

            }
        }
    }

    cout << cnt << endl;

    return 0;
}

/*
3 2
v[0]1 v[1]1 v[2]1 size:1
v[0]1 v[1]1 v[2]3 size:3
v[0]1 v[1]3 v[2]3 size:3
v[0]2 v[1]2 v[2]2 size:1
v[0]3 v[1]3 v[2]3 size:1
9


*/