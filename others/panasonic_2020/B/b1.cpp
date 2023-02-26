// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int H, W;
    cin >> H >> W;

    ll ansOdds = 0;
    ll ansEven = 0;
    ll ans = 0;
    // コーナーケースを考えていない
    if (H == 1 || W == 1)
    { 
        cout << "1" << endl;
        return 0;
    } else {
        for (int i = 1; i <= W; i++)
        {
            for (int j = 1; j <= 2; j++)
            {
                if (i % 2 == 1 && j % 2 == 1)
                {
                    ansOdds++;
                }
                else if (i % 2 == 0 && j % 2 == 0)
                {
                    ansEven++;
                }
            }
        }
    }

    // ここまでで二段目のans
    ans = ansEven + ansOdds;
    // cout << "ansEven:" << ansEven << " ansOdds:" <<  ansOdds <<endl;
    // cout << ans << "  H/2:" << H/2 << " ";
    // 全体のansを求める
    ll pair = H / 2;
    if (H % 2 == 0)
    {
        ans = ans * pair;
    }
    else
    {
        ans = ans * pair + ansOdds;
    }

    cout << ans << endl;

    return 0;
}
