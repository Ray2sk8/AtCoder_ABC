// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int N;
    cin >> N;
    pair<pair<string, int>, int> p[N];

    for (int i = 0; i < N; i++) {
        string s;
        int tmp;
        cin >> s >> tmp;
        p[i] = make_pair(make_pair(s, -1*tmp), i);
    }

    sort(p, p+N);

    for (int i = 0; i < N; i++) {
        // cout << p[i].first.first << " " << p[i].first.second << " ";
        cout << p[i].second + 1 << endl;
    }

    return 0;
}
