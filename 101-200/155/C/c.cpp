#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main(){

    int N;
    cin >> N;
    map<string, int> s;
    int maxNum = -1;

    for(int i = 0; i < N;i++){
        string str;
        cin >> str;
        s[str] += 1;
    }

    for(auto x: s){
        if(x.second > maxNum){
            maxNum = x.second;
        }
    }


    for(auto x: s){
        if(x.second == maxNum){
            cout << x.first << endl;
        }
    }



    return 0;
}