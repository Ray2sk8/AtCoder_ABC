// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ll A,B,K;
    cin >> A >> B >> K;

    ll end_a = A + K-1;
    ll start_b = B-K+1;

    if( start_b <= end_a){
        //全部書き出す
        for(int i=A; i<=B; i++){
            cout << i << endl;
        }
    } else {
        //部分で書き出す
        for(int i=A; i<=end_a; i++){
            cout << i << endl;
        }
        for(int i=start_b; i<=B; i++){
            cout << i << endl;
        }
    }

    return 0;
}
