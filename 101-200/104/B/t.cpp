// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

string str;

int main() {

    cin >> str;    
    int num = str[0];
    cout << num << endl;
    num -= '0';
    cout << num << endl;

    num = atoi(str.c_str());

    cout << num << endl;
    return 0;
}
