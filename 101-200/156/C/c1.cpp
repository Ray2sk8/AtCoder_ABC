#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main(){

    int N;
    cin >> N;
    int sum = 0;
    
    vector<int> X(N);

    for(int i = 0; i<N; i++){
        cin >> X[i];
        sum += X[i];
    }

    long long minNum = 1e18;
    for(int i = 1; i<= 100; i++){
        long long  n=0;
        for(int j=0; j<N; j++){
            n += pow(X[j] - i, 2 );

        }
        if(minNum > n)
            minNum = n;
    }

    cout << minNum << endl;

    return 0;
}