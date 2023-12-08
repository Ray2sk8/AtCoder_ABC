// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

<<<<<<< HEAD
int main()
{
=======
long long L[100];

int main() {
    int N;
    cin >> N;
    int ans = 0;

    L[0] = 2;
    L[1] = 1;
    for (int i = 2; i <= N; i++) {
        L[i] = L[i - 1] + L[i - 2];
    }

    cout << L[N] << endl;
>>>>>>> a6b5a2a76598df4cac219aaafd197826cdc50c9b

    return 0;
}
