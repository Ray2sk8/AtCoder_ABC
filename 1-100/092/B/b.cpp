// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int N;
vector<int> A(1000);
int D, X;

// int aiNum(int id) {
//     int ret = 0;

//     // for(int i=1; (i-1)*A[id]+1<=D;i++){
//     //     ret++;
//     // }
//     int n = (D - 1) / A[id] + 1;
//     ret = n;
//     // ret = n*(n+1)*A[id]/2+(1-A[id] )*n;

//     // cout << "id:"<< id << " A:" << A[id] << " n:" << n << " ret:" << ret <<
//     // endl;

//     return ret;
// }

int main() {

    cin >> N;

    cin >> D >> X;

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    ll sum = 0;
    for (int i = 1; i <= N; i++) {
        // sum += aiNum(i);
            int n = (D - 1) / A[i] + 1;
            sum += n;
    }

    cout << sum + X << endl;
    return 0;
}
