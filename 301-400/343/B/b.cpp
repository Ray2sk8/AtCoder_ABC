// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ll N;
    cin >> N;
    vector<vector<int>> A(N+1);

    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            int x;
            cin >> x;
            if(x== 1){
                A[i].push_back(j);
            }
        }
    }

    for(int i=1; i<=N; i++){
        for(auto x: A[i]){
            cout << x << " ";
        }
        cout << endl;
    }


    return 0;
}
