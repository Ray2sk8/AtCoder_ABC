// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    int N;
    cin >> N;
    vector<pair<string, int>> U(N);

    ll sum = 0;

    for (int i = 0; i < N; i++) {
        string s;
        int num;
        cin >> s >> num;
        sum += num;
        U[i] = make_pair(s, i);
    }

    sum %= N;
    sort(U.begin(), U.end());

    cout << U[sum].first << endl;

    return 0;
}
