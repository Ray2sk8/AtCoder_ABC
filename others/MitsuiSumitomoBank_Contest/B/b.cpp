#include <iostream>
#include <bits/stdc++.h>
#include <windows.h>

const float tax = 1.08;

using namespace std;
using ll = int long long;

bool solve(int N, ll *X)
{
    // double  N;
    // ll X;
    // cin >> N;

    // 定価を推定
    *X = (int)(N / tax) + 1;

    // 税込み定価はあっているのか
    double Xs = *X * tax;

    if ((ll)Xs == N)
    {
        return true;
    }
    else
        return false;
}

int main()
{

    int i = 100;
    ll x;

    // 出力
    while (i <= 5*1e5+1)
    {
        cout << i; // 税込み
        Sleep(0.1);
        if (solve(i, &x))
        {
            cout << "  定価：" << x << endl;
            Sleep(0.1);
        } else {
            cout << "  :(" << endl;
            Sleep(0.1);
        }
        i++;
    }

    return 0;
}
