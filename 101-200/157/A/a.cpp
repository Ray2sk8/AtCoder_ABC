#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main(){

    int N;
    cin >> N;

    if(N%2 == 0){
    N /= 2;
    } else {
    N = N/2 + 1;    
    }
    cout << N << endl; 

    return 0;
}