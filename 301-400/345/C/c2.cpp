#include <iostream>
#include <string>
#include <vector>

using namespace std;
using ll = long long;

int main() {
    string str;
    cin >> str;

    ll strsize = str.size();

    vector<ll> A(26, 0);

    for (int i = 0; i < strsize; i++) {
        int num = int(str[i] - 'a');
        A[num]++;
    }

    ll ans = strsize * strsize;
    bool flg = false;

    for (int i = 0; i < 26; i++) {
        if (A[i] != 0) {
            ans -= A[i] * A[i];
            if (A[i] > 1) {
                flg = true;
            }
        }
    }

    ans /= 2;

    if (flg) {
        ans++;
    }

    cout << ans << endl;

    return 0;
}
