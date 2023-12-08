/**
 * @file b.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-20
 * 
 * @copyright Copyright (c) 2023
 * 
 * start    21:03
 * end      21:12
 */


#include <iostream>
#include <string>

using namespace std;

int main(){


    int long long N;
    int K;
    cin >> N >> K;

    for(int i=0; i<K; i++ ){
        if(N%200 == 0){
            N /=200;
        } else {
            N = N*1000 + 200;
        }
    }

    string ans = to_string(N);

    cout << ans << endl;


    return 0;
}