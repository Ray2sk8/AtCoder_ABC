#include <bits/stdc++.h>


using namespace std;
using ll = long long;


int main(){

    string s;
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), ::toupper);

    cout <<  s << endl; 

    return 0;
}