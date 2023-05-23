// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
ll A, B;


bool kaibun(ll a) {
    bool ret = false;

    ll at = a/100;
    ll b = a%1000;
    ll ans = 0;


    ans += (at % 10)*100;
    at /= 10;

    ans += (at % 10)*10;
    at /= 10;
    
    ans += at;

    if(ans == b){
        ret = true;
    }


    return ret;
}



int main() {

    cin >> A >> B;
    int count = 0;
    while(A<=B){
        
        if(kaibun(A) ){
            count++;
        }

        A++;
    }

    cout << count << endl;

    return 0;
}
