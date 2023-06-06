
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    double a = 1.5;
    double b = 1.8;

    if (a == b) {
        cout << a << ":same" << endl;
    }
    b -= 0.3;
    if (a == b) {
        cout << a << ":same" << endl;
    }

    return 0;
}