// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll A[100];

int main() {

    int cnt = 0;
    ll x;
    do {
        cin >> x;
        A[cnt] = x;
        cnt++;
    } while (x != 0);

    for(int i = cnt-1; i >= 0; i--){
        cout << A[i] << endl;
    }



    return 0;
}
