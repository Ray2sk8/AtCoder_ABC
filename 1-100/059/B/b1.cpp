// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long ;

int main()
{
    ll A,B;
    cin >> A >> B;

    if(A>B){
        cout << "GREATER" << endl;
    } else if(A<B){
        cout << "LESS" << endl;
    } else if(A==B) {
        cout << "EQUAL" << endl;
    }

    return 0;
}
