#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    vector<int> A(9);
    vector<int> B(8);
    int sum = 0;
    int sumb = 0;

    for (int i = 0; i < 9; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < 8; i++) {
        cin >> B[i];
    }

    for (int i = 0; i < 9; i++) {
        sum += A[i];
    }
    for (int i = 0; i < 8; i++) {
        sumb += B[i];
    }

    //
    int ans = 0;
    if (sum == sumb) {
        ans = 1;
    } else {
        // A > B
        ans = sum - sumb + 1;
    }

    cout << ans << endl;

    return 0;
}