#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<int> p(N);
    vector<int> q(N);

    for (int i = 0; i < N; i++) {
        cin >> p[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> q[i];
    }

    vector<int> sp = p;
    sort(sp.begin(), sp.end());
    vector<int> sq = q;
    sort(sq.begin(), sq.end());

    int Pcnt = 0;
    int Qcnt = 0;
    bool ok = true;
    do {
        Pcnt++;
        if (sp == p) {
            ok = false;
            break;
        }

    } while (next_permutation(sp.begin(), sp.end()) && ok == true);

    ok = true;
    do {
        Qcnt++;
        if (sq == q) {
            ok = false;
            break;
        }
    } while (next_permutation(sq.begin(), sq.end()) && ok == true);

    int ans = abs(Pcnt - Qcnt);
    cout << ans << endl;

    return 0;
}