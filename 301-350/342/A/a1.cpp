#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    string s;
    char a,b;
    int flg = 0;
    int cnt_a = 0;
    int cnt_b = 0;


    cin >> s;

    for(int i=0; i< s.size(); i++ ){
        if(i == 0){
            a = s[i];
            cnt_a = i;
            continue;
        } 
        if(a == s[i]){

        } else {
            // 一文字目と違うとき
            flg++;
            b = s[i];
            cnt_b = i;
        }
    }

    if(flg == 1){
        cout << cnt_a + 1 << endl;
    } else {
        cout  << cnt_b + 1 << endl;
    }

    return 0;
}