// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{

    int N;
    cin >> N;

    int X = 1;
    int count = 0;

    while(N >= X){
        X = X*2;
        count++;
    }

    cout << X/2 << endl;

    return 0;
}
