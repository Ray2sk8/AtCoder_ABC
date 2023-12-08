#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = int long long;

int main()
{

    int N;
    int X = 0;
    cin >> N;

    for (X = 0; X <= 5 * 1e6 + 1; X++)
    {
        if (X * 108/100 == N)
        {
            cout << X << endl;
            return 0;
        }
    }

    cout << ":(" << endl;

    return 0;
}
