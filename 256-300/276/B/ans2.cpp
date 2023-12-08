#include <iostream>
#include <bits/stdc++.h>

#define int long long
using namespace std;

signed main() {
    int n,m;
    cin>>n>>m;
    vector<int>vec[n];
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        vec[a-1].push_back(b);
        vec[b-1].push_back(a);
    }
    
    for(int i=0;i<n;i++){
        cout<<vec[i].size()<<' ';
        sort(vec[i].begin(),vec[i].end());
        for(int j=0;j<vec[i].size();j++){
                cout<<vec[i][j]<<' ';
        }
        cout<<endl;
    }
}
