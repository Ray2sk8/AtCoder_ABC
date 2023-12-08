#include <bits/stdc++.h>
using namespace std;


static int sumNum(int n);

int main()
{
    // 入力
    int N,nLow,nHigh;
    cin >> N;
    cin >> nLow >> nHigh;
    // 満たすものの数
    int nSum = 0;

    for(int i = 1;i<= N;i++){//Nまでの数
        int sum = sumNum(i);
        if(nLow <= sum and sum <=nHigh){
            // cout << "Num:" << i << " Sum is:" << i <<  endl;
            nSum += i;
        }
    }

    cout << nSum << endl;
    return 0;
}

int sumNum(int n){
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}