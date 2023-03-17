#include <bits/stdc++.h>

using namespace std;

int main(void) {

    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;
    int t[N + 1], x[N + 1], y[N + 1];
    t[0] = 0;
    x[0] = 0;
    y[0] = 0;
    for (int i = 1; i <= N; i++) {
        cin >> t[i] >> x[i] >> y[i];
    }
    bool ok = true;
    for (int i = 0; i < N; i++) {
        
        int dt = t[i + 1] - t[i];
        int dx = abs(x[i + 1] - x[i]);
        int dy = abs(y[i + 1] - y[i]);

        if (dt % 2 != (dx + dy) % 2 || (dx + dy) > dt) {
            ok = false;
        }
    }
    
    cout << (ok ? "Yes" : "No") << endl;
    return 0;
}