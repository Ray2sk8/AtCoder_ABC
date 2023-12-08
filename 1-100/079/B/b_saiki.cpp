// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int func(int n){

    if(n==0){
        return 2;
    } else if(n==1){
        return 1;
    }

    return func(n-1) + func(n-2);
}

int main() {
    int N;
    cin >> N;

    cout << func(N) << endl;

    return 0;
}
