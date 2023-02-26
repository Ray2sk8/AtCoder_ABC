// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int H,W;
    cin >> H >> W;

    ll ans = 0;

    for(int i = 1; i<= H; i++){
        for(int j=1; j<= W; j++){
            if(i%2 == 1 && j%2 == 1 ){
                ans++;
            } else if(i%2 == 0 && j%2 == 0 ){
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
