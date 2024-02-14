#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main(){
    ll N, N_size;
    cin >> N;
    string N_str = to_string(N);
    N_size = N_str.size();
    // cout << N_size << endl;

    //head number of elements
    ll c = N/pow(10, N_size-1);
    // cout << c << endl;

    ll X = c;
    ll ans = c;
    for(int i=2; i<=N_size; i++){
        X = X*10 + 9;
        ans += 9;
    }
    // cout << X << endl;
    // cout << ans << endl;

    if(X>N){
        ans--;
    }

    cout << ans << endl;

    return 0;
}