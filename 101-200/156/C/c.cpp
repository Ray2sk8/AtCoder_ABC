/**
 * @file c.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-22
 * 
 * @copyright Copyright (c) 2023
 * 
 * 16:18
 * 16:52
 * 
 */

#include <iostream>
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

    int mid = sum/X.size();
    cout << X.size() << "\t"<<  mid << endl;

    long long min = 0;
    for(int i = 0; i<N; i++){
        min += pow( mid - X[i]  ,2 );
    }

    cout << min << endl;

    return 0;
}