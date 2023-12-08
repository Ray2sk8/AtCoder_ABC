#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    int A,B;
    cin >> A >> B;
    int maxm = max(100/0.08, 100/0.1);
    int minm = min(1/0.08, 1/0.1);

    // cout << maxm << " " << minm << endl;
    for(int i = minm; i <= maxm; i++) {
        if( (int)(i*0.08) == A &&  (int)(i*0.1) == B ) {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}