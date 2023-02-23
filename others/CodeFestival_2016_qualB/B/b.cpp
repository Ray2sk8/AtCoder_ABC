#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int N, A, B;
    char s[N];

    cin >> N >> A >> B;
    cin >> s;
    
    int sumNum = A + B;

    int abroadRank = 0;//海外の参加者

    int PassNum = 0;//通過した人の数
    //int pass[N] = {};//通過したか否か
    int n = 0;//配列用

    while(n <= N){
        cout << "test" << endl;
        switch (s[n])
        {
        case 'a':
            if(PassNum < sumNum ){//通過者が参加人数より少ない
                //pass[n] = true;
                PassNum++;
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
            break;
        case 'b':
            if(PassNum < sumNum || abroadRank  <= B )
            {//通過者が参加人数より少ない
                //pass[n] = true;
                PassNum++;
                abroadRank++;
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
            break;
        case 'c':
            cout << "No" << endl;
            
            break;
        
        default:
            break;
        }
        
        n++;
    }



    cout << endl;

    return 0;
}