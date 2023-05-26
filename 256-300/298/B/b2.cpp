#include <bits/stdc++.h>

using namespace std;

int n;
int a[110][110];
int a1[110][110];

int b[110][110];

bool matchAB(void) {
    bool ret = true;

    for (int i = 1; i <= n && ret == true; i++) {
        for (int j = 1; j <= n && ret == true; j++) {
            if (a[i][j] == 1 && b[i][j] == 0) {
                ret = false;
                break;
            }
        }
    }

    return ret;
}

void shiftA(void) {

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            a1[j][n + 1 - i] = a[i][j];
            // cout << "   i:" << i << " j:" << j << endl;
            // cout << "a1 i:" << j << " j:" << n + 1 - i << endl;
        }
    }

    // cout << "shift" << endl;
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= n; j++) {
    //         cout << a1[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            a[i][j] = a1[i][j];
        }
    }

    return;
}

int main() {

    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> b[i][j];
        }
    }

    // cout << endl;
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= n; j++) {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    bool flg = false;
    for (int i = 1; i <= 4; i++) {
        if (matchAB() == true) {
            flg = true;
            break;
        }
        shiftA();
        // cout << "i:" << i << endl;
        // for (int i = 1; i <= n; i++) {
        //     for (int j = 1; j <= n; j++) {
        //         cout << a[i][j] << " ";
        //     }
        //     cout << endl;
        // }
    }

    if (flg == true) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}