#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int a, b;
    cin >> a >> b;
    b = b - a + 1;
    cout << endl;

    for (int j = 0; j < b; j++) {
        for (int i = 1; i <= 2; i++) {
            cout << pow(a, i) << " ";
        }
        cout << endl;
        a++;
    }

    return 0;
}