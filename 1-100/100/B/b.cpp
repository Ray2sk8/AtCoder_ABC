// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll D, N;
    cin >> D >> N;
    if (N == 100)
        N++;
    cout << N;
    for (int i = 0; i < D; i++)
        cout << "00";
    cout << endl;

    return 0;
}
