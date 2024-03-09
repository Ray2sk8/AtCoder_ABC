#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main(){

    ll A,B,ans;
    cin >> A >> B;
    ans = A+B;
    if(ans == 0){
        ans = 9;
    } else {
        ans--;
    }

    cout << ans << endl;

    return 0;
}