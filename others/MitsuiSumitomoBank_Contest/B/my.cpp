#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = int long long;

int main()
{

    ll N;
    ll X;
    cin >> N;

    X = ( N/1.08 ) + 1;

    double Xs = double(X * 1.08);
    
    if( (ll)Xs == N ){
    cout << X << endl;
    } else {
        cout << ":(" << endl;
    }
    return 0;
}
