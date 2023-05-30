// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
ll A, B;


bool kaibun(ll a) {
    bool ret = false;

    string s = to_string(a);

    if( s[0] == s[4] && s[1] == s[3]){
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
