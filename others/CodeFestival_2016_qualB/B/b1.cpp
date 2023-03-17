/**
 * @file b_1.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-03-17
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    ll A, B, N;
    cin >> N >> A >> B;
    char str[1 << 18];
    cin >> str;

    ll count = 0, overseas = 0;
    for (int i = 0; i < N; i++) {
        switch (str[i]) {
        case 'a':
            //cout << "A ";
            if (count < (A + B)) { // 参加人数以内
                count++;
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
            break;
        case 'b':
            //cout << "B ";
            if (count < A + B) { // 参加人数以内
                if ( overseas < B) { // 海外順位
                    cout << "Yes" << endl;
                    count++;
                    overseas++;
                } else {
                    cout << "No" << endl;
                }
            } else {
                cout << "No" << endl;
            }
            break;
        case 'c':
            //cout << "C ";
            cout << "No" << endl;
            break;
        }
    }

    return 0;
}
