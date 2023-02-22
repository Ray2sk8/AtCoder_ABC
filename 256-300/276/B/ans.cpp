#include<bits/stdc++.h>
using namespace std;

int main() {
 int N,M;
 cin >> N >> M;
 
vector<set<int>> G(N);

 for(int i = 0; i < M; i++){
    int A,B;
    cin >> A >> B;
    G[A-1].emplace(B-1);
    G[B-1].emplace(A-1);
 }
 
 for(int i = 0; i < N; i++){
    cout << G[i].size();
    for(auto &a : G[i]) cout << ' ' << a+1;
    cout << endl;
 }
    
 return 0;
}