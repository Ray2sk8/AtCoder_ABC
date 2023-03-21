#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main(){

    double long n, n1;
    cin >> n;

    if( int(n)%2 == 1){
        n1 = (int)(n+1)/2;
    } else {
        n1 = n/2;
    }

    n = n1/n;

    cout << n << endl; 

    return 0;
}