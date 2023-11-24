// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

string str;

int main() {

    cin >> str;

    int size = str.size();

    //先頭がA
    if (str[0] != 'A') {
        cout << "WA" << endl;
        return 0;
    }

    //Cの条件
    if (str[2] == 'C' && str[size - 2] == 'C') {
        cout << "WA" << endl;
        return 0;
    } else if (str[2] == 'C') {

    } else if (str[size - 2] == 'C') {

    } else {
        cout << "WA" << endl;
        return 0;
    }

    //小文字
    for(int i = 0; i < size; i++) {
        if(i == (0 || 2 || size -2)){
            continue;
        }
        if( 'a' <= str[i] || str[i] <= 'z' ){

        } else {
            cout << "WA" << endl;
            return 0;
        }
    }

    cout << "AC" << endl;

    return 0;
}
