/**
 * @file a1.cpp
 * @author your name (you@domain.com)
 * @brief pointer test
 * @version 0.1
 * @date 2023-03-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    char s;
    char n[100];
    cin >> n;
    strcpy(s,n);
    //s = &n;
    cout << s << endl;

    while ( *s) {
        if (*s == ',') {
            cout << " ";
        } else {
            cout << *s;
        }
        s++;
    }

    cout << endl;

    return 0;
}