#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main(){
    string a,b;
    char op;
    cin >> a >> op >> b;
    int ans;
    switch(op){
        case '+':
            ans = stoi(a) + stoi(b);
            break;
        case '-':
            ans = stoi(a) - stoi(b);
            break;
        default:
            break;
    }
   

    cout <<  ans << endl; 

    return 0;
}