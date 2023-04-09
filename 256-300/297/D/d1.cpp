
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
ll A, B, cnt = 0;

int main() {
    cin >> A >> B;
    if (A < B)
        swap(A, B);
    // cout << A << " " << B << " " << cnt << endl;

    while (B >= 1) {
        if (A == B) {
            break;
        }

        // 同じ数字がくることはない
        //  Bが１ならばA＝B=1となる
        // 常にA>B
        if (B == 1) {
            cnt += A / B;
            cnt--; // 一回多く足している
            A = 1;
        } else {
            cnt += A / B;
            A = A % B;
            if(A==0){
                cnt--;
            }
        }
        if (A < B)
            swap(A, B);
        // cout << A << " " << B << " " << cnt << endl;
    }

    cout << cnt << endl;

    return 0;
}