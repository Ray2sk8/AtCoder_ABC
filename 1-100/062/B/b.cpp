#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    int H, W;
    string hw[100];
    string x[110];

    cin >> H >> W;

    for (int i = 0; i < H; i++) {
        cin >> hw[i];
    }

    for (int i = 0; i < W+2; i++) {
        x[0] += "#";
    }

    for (int i = 1; i <= H; i++) {
        x[i] = "#" + hw[i - 1] + "#";
    }

    for (int i = 0; i < W+2; i++) {
        x[H+1] += "#";
    }

    for(int i = 0; i <= H+1; i++) {
        cout << x[i] << endl;
    }

    return 0;
}
