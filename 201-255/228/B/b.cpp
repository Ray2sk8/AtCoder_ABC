// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    //入力
    ll N,X;
    cin >> N >> X;
    vector<int> a(N+1);
    for(int i=1; i<=N; i++){
        cin >> a.at(i);
    }

    //出力のカウント
    ll count = 0;
    //flg：堂々巡りを防ぐ
    bool ok = true;
    //A_i :つぎの番号
    ll nextA = X;
    //dfs?
    while (ok)
    {
        if( a.at( nextA ) != -1 ){
            count++;
            //一時的に格納
            ll y = a.at( nextA );
            //一度来たならば-1にする
            a.at( nextA ) = -1;
            nextA = y;
        } else {
            ok = false;
        }
    }
    
    cout << count << endl;



    return 0;
}
