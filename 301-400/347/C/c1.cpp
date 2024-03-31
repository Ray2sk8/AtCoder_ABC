#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll N, A, B;
    cin >> N >> A >> B;
    ll week = A + B;

    vector<ll> D(N);
    for (int i = 0; i < N; i++) {
        ll x;
        cin >> x;
        x %= week;
        if (x == 0) {
            x = week;
        }
        D[i] = x;
    }

    // vector<bool> is_holiday(week + 1, false);
    // vector<ll> day_holiday;
    // for (int i = 0; i < N; i++) {
    //     is_holiday[D[i]] = true;
    //     day_holiday.push_back(D[i]);
    // }

    // sort(day_holiday.begin(), day_holiday.end());
    // unique(day_holiday.begin(), day_holiday.end());

    sort(D.begin(), D.end());
    D.erase(unique(D.begin(), D.end()), D.end());
    int D_size = D.size();

    if (D[D_size - 1] - D[0] <= A) {
        cout << "Yes" << endl;
    } else {
        
        for (int i = 1; i < D_size; i++) {
            if (D[i] - D[i - 1] > B && D[i-1] <= A) {
                cout << "Yes" << endl;
                return 0;
            }
        }
        cout << "No" << endl;
    }

    return 0;
}