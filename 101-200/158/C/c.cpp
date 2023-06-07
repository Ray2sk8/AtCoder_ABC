/**
 * 不完全
*/

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    int A, B;
    cin >> A >> B;

    // 元の値段を調べる
    double xA, xB;
    xA = (double)A / (0.08);
    xB = (double)B / (0.1);
    cout << xA << " " << xB << endl;
    if (xA == xB) {
        cout << xA << endl;
        return 0;
    }
    cout << endl;

    for (double x = (double)A; x < (int)A + 1; x += 0.1) {
        for (double y = (double)B; y < (int)B + 1; y += 0.1) {
            double eightPer = x / 0.08;
            double tenPer = y / 0.1;
            cout << x << " " << y << " " << eightPer << " " << tenPer << endl;
            if ( fabs(eightPer - tenPer) == 0 ) {
                cout << eightPer << ":Bingo!!!!!" << endl;
                return 0;
            }
        }
    }

    cout << "-1" << endl;

    return 0;
}