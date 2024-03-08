#include <bits/stdc++.h>

using namespace std;
using ll = long long;

unsigned long long gosen = 5*1e15;

int main(){

    string str;
    ll K;
    cin >> str;
    cin >> K;

    unsigned long long ans = 0;

    for(int i = 0; i < str.size(); i++){

        int c = (int)str[i] - '0';
        ans += ll( pow(c, K) );
        // cout << c << " " << pow(c, gosen) << endl;
        if(ans >= K){
            cout << str[i]  <<  endl;
            break;
        }
    }

    return 0;
}