#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    ll N, D;
    cin >> N >> D;
    vector<int> t(N+1,0);

    for (int i = 1; i <= N; i++) {
        cin >> t[i];
    }

    for (int i = 2; i <= N; i++) {
        if(t[i]-t[i-1] <= D){
            cout << t[i] << endl;
            //cout << t[i] - t[i-1] << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}