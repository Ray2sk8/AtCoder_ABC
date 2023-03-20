#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main(){

    ll N,K;
    cin >> N >> K;

    N = min( N%K, K - N%K );

    cout << N << endl; 

    return 0;
}