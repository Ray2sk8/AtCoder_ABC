#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a.at(i);
    }

    sort(a.begin(), a.end());
    ll count = 0;
    ll x = 0;
    ll i = 1;
    // for (int i = 0; i < N; i++) {
    //     cout << i << ":" << a.at(i) << " " << endl;
    // }
    if(N==1){
        cout << 0 << endl;
        return 0;
    }

    while (1) {
        // cout << "x:" << x << " i:" << i << " a:" << a.at(x) << " b:" << a.at(i)
        //      << endl;
        if (a.at(x) == a.at(i) && x != i ) {
            // 探しているのがある
            x = i + 1;
            i++;
            // cout << "count!" << endl;
            count++;
        } else {
            // 探しているのがなくなった
            x = i;
        }
        i++;
        if (i >= N) {
            x = i;
        }
        if (x >= N) {
            break;
        }
    }

    cout << count << endl;

    return 0;
}