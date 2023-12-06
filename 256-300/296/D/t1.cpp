#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    ll N;
    cin >> N;

    for (int i = 1; i<= N; i++) {
        ll b = (N + i - 1) / i;
        ll X = i * b;
        cout << "i:" << i << " b:" << b << " x:" << X << endl;
        
    }


    return 0;
}

/**
 * @brief 切り上げ
 *
 * https://daeudaeu.com/kurisuke_kiriage_shisyagonyu/
 *
 */