// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<vector<int>> x(10, vector<int>(10, 0));

int main() {
    int N, D;
    cin >> N >> D;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < D; j++) {
            cin >> x[i][j];
        }
    }

    int ans=0;

    for (int i = 0; i < N; i++) {
        for (int j = i+1; j < N; j++) {
            double sum=0;
            for(int k=0; k < D; k++) {
                sum += (x[i][k] - x[j][k])*(x[i][k] - x[j][k]);
            }
            sum = sqrt(sum);
            if(sum == (int)sum){
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
