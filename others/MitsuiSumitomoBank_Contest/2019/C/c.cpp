#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int a = 100;
    int b = a + 1;
    int c = b + 1;
    int d = c + 1;
    int e = d + 1;
    int f = d + 1;

    int X;
    cin >> X;

    int num = X/a;

    for (int i = 0; i <= num && i * a <= X; i++) {
        for (int j = 0; j <= num -i&& j * b <= X - i*a; j++) {
            for (int k = 0; k <= num -i - j && k * c <= X - i*a - j*b; k++) {
                for (int l = 0; l <= num -i - j -k && l * d <= X - i*a - j*b - k*c; l++) {
                    for (int m = 0; m <= num -i - j -k-l && m * e <= X - i*a - j*b - k*c - l*d; m++) {
                        for (int n = 0; n <= num  -i - j -k-l-m && n * f <= X - i*a - j*b - k*c - l*d - m*e; n++) {
                            if (a * i + b * j + c * k + d * l + e * m + f * n ==X) {
                                cout << 1 << endl;
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }

    cout << 0 << endl;
    return 0;
}