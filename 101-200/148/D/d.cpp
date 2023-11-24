#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int N;
// vector<int> A(200000+1,0);

int main(){

    cin >> N;
    vector<int> A(N+1,-1);
    for(int i=1; i<=N; i++){
        cin >> A[i];
    }

    //sort(A.begin(), A.end());

    int num = 1;
    int destroyed = 0;
    for(int i=1; i<=N; i++){
        if(num == A[i]){
            num++;
        } else {
            destroyed++;
        }
    }

    //display
    // for(int i=1; i<=N; i++){
    //     cout << A[i] << endl;
    // } cout << endl;

    if(destroyed == N){
        cout << -1 << endl;
    } else {
        cout << destroyed << endl;
    }

    return 0;
}