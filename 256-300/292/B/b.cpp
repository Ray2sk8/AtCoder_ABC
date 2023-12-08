// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int N, Q;//N: 選手
    cin >> N >> Q;
    //選手の配列
    int player[N][3] = {};
    // cout << endl;

    
    int n[Q];//イベント番号
    int x[Q];//選手
    for(int i=0; i<Q; i++){
        cin >> n[i] >> x[i];
    }    
    
    // cout << endl;

    // for(int i=0; i<Q; i++){
    //     cout << n[i] << "  " << x[i] << endl;;
    // }   
    // cout << endl;


    for(int i=0; i<Q; i++){
        if(n[i] == 1){//イエローカード
            player[x[i] - 1][0] += 1;
            if( player[x[i] - 1][0] >= 2 ){
                player[x[i] - 1][2] += 1;
            }
        } else if(n[i] == 2){//レッドカード
            player[x[i] - 1][1] += 1;
            player[x[i] - 1][2] += 1;
            
        } else if( n[i] == 3){//退場しているか否か
            if(player[x[i] - 1][2] >= 1 ){
                cout << "Yes" << endl;
            } else if( player[x[i] - 1][2] == 0){
                cout << "No" << endl;
            }
        }
    }



    return 0;
}
