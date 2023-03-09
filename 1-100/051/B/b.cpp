// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll K, S;
    cin >> K >> S;

    ll count = 0;

    for (int x = 0; (x <= K && x <= S); x++) {
        for (int y = 0; (y <= K && y <= S - x); y++) {
            
            int z = S - x - y;
            if( 0 <= z && z <= K ){
                count++;
            }
            //for (int z = 0; (z<= K && z <= S - x - y); z++) {
                // cout << "x:" << x << " y:" << y << " z:" << z << endl;
                // if (x + y + z == S) {
                //     count++;
                //     //cout << "x:" << x << " y:" << y << " z:" << z << endl;
                // }
            //}
        }
    }

    cout << count << endl;
    return 0;
}
