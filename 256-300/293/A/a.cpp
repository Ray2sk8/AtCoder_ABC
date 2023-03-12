#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main(){
    string s;

    cin >> s;
    int n = s.size();

    for(int i = 1; i <= n/2; i++){
        string x;
        x[0] = s[ 2*i - 1 ]; //2i
        
        s[  2*i - 1 ] = s[ 2*i - 2 ]; //2i-1

        s[ 2*i - 2 ] = x[0];

    }


    cout <<  s << endl; 

    return 0;
}