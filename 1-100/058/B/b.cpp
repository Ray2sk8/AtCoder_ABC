// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    string o,e,str;
    cin >> o >> e;
    bool flg = true;
    int size = o.size() + e.size();

    for(int i = 0; i < size;i++){
        if(flg){
            str += o[i/2];
        } else {
            str += e[i/2];
        }
        flg = !flg;
    }

    cout << str << endl;

    return 0;
}
