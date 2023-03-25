// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll R, C;
vector<string> town(20);
// vector<vector<string>> town(20, vector<string>(20,0));

// string town[20][20];

/**
 * @brief
 *
 * @param x 爆弾
 * @param y
 * @param a 推定値
 * @param b
 * @param r 距離
 * @return true
 * @return false
 */
bool bombAlive(ll x, ll y, ll a, ll b, ll r) {
    // cout << "i:" << a << " j:" << b << "  range:" << r << endl;
    r = r -48;
    ll range = abs(x - a) + abs(y - b);
    if (r >= range) {
        // dead
        return true;
    } else {
        return false;
    }
}

// 座標
bool askB(ll r, ll c) {
    bool ret;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            char s = town[i][j];
            
            switch (s) {
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                ret = bombAlive(r, c, i, j, town[i][j]);
                if (ret) {
                    return ret;
                }
                break;
            default:
                ret = false;
            }
        }
    }
    return ret;
}

bool IsAlive(char s, ll i, ll j) {
    bool ret = false;
    if (s == '.') {
        ret = false;
    } else if (s == '#') {
        // ここが壊れるかどうか
        if (askB(i, j)) {
            ret = true;
        }
    }
    return ret;
}

int main() {

    cin >> R >> C;

    for (int i = 0; i < R; i++) {
        cin >> town.at(i);
    }

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            char s = town[i][j];
            if (IsAlive(s, i, j)) {
                town[i][j] = '.';
            }
        }
    }

    for (int i = 0; i < R; i++) {
        for(int j=0; j<C; j++){

            char s = town[i][j];
            switch (s) {
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                town[i][j] = '.';
            break;
            }
        }
    }

    for (int i = 0; i < R; i++) {
        cout << town.at(i) << endl;
    }

    return 0;
}
