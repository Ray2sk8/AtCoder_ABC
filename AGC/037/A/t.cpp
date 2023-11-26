#include <bits/stdc++.h>
using namespace std;

int main() {
    int t = 0, i;
    string str, s1 = "", s2 = "";
    cin >> str;

    for (i = 0; i < str.size(); i++) {
        s1 = str[i] + s1;
        if (s1 != s2) {
            s2 = s1;
            s1 = "";
            t++;
        }
    }
    cout << t << endl;

    return 0;
}