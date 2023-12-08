#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main(){
    int N,M;
    cin >> N >> M;
    
  vector<vector<int>> v(N);

    for(int i = 0; i<M; i++){
        int v1,v2;
        cin >> v1 >> v2;
        v.at(v1-1).push_back(v2);
        v.at(v2-1).push_back(v1);
    
    }

    sort(v.begin(), v.end());

    for(int i = 0; i <= v.size(); i++){
        v.at(i);
    }

    cout <<  << endl; 

    return 0;
}