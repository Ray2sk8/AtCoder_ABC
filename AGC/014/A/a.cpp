#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll A, B, C;
    cin >> A >> B >> C;
    ll initA, initB, initC;
    initA = A;
    initB = B;
    initC = C;

    bool flg = true;
    ll count = 0;
    while (flg) {
        ll a = A;
        ll b = B;
        ll c = C;
        // A,B,Cいずれかが奇数
        if (A % 2 != 0 || B % 2 != 0 || C % 2 != 0) {
            flg = false;
            break;
        }

        // 分けた後の数
        A = b / 2 + c / 2;
        B = a / 2 + c / 2;
        C = b / 2 + a / 2;
        // カウント
        count++;

        // A,B,Cいずれかが奇数
        if (A % 2 != 0 || B % 2 != 0 || C % 2 != 0) {
            flg = false;
            break;
        } else if (A == initA && B == initB && C == initC) {
            flg = false;
            count = -1;
            break;
        }
    }

    cout << count << endl;

    return 0;
}