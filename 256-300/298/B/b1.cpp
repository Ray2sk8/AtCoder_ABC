#include <bits/stdc++.h>

using namespace std;

int n;
int N = 110;
int a[110][110];
int a1[110][110];

int b[110][110];

bool matchAB(void) {
    bool ret = true;

    for (int i = 1; i <= n && ret == true; i++) {
        for (int j = 1; j <= n && ret == true; j++) {
            if (a[i][j] != b[i][j]) {
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
            a1[j][N -1 -i] = a[i][j];
        }
    }

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

    bool flg = false;
    for (int i = 1; i <= 4; i++) {
        if (matchAB() == true) {
            flg = true;
            break;
        }
        shiftA();
    }

    if (flg) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}