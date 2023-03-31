// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

string s;

int fS3(int x) {

    int ret = 0;
    int t = 100;
    for(int i=0; i<3; i++){
        int a =s[x] - '0';
        ret += t*a;
        t /= 10;
        x++;
    }

    // cout << "x:" << x <<  " ret:" << ret << endl;

    return ret;
}

int main() {

    cin >> s;

    int m = 1e5;

    for (int i = 0; i < (int)s.size()-2; i++) {
        int x = abs(fS3(i) - 753);
        m = min(x, m);
    }

    cout << m << endl;

    return 0;
}
