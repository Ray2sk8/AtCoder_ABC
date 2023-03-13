// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int N;
    cin >> N;

    //性と名の入力
    vector<string> s(N+1);
    vector<string> t(N+1);

    for(int i=1; i<=N; i++){
        cin >> s[i] >> t[i];
    }

    //bool flg_nickName = false;
    for(int i=1; i<=N; i++){
        int sCount = 0, tCount = 0;
        for(int j=1; j<=N; j++){
            if(i == j){//自分の名前はパス
                continue;
            }else{
                if(s[i] == t[j] || s[i] == s[j]){//性と名前が一致、性が同じ
                    sCount++;
                }
                if(t[j] == s[i] || t[j] == t[i]){//名前と性が一致、名前が同じ
                    tCount++;
                }
            }
            //ダブりがある
            if(sCount && tCount){
                cout << "No" << endl;
                return 0;
            } 
        }




    }
    cout << "Yes" << endl;
    return 0;
}
