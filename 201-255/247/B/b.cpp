// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int N;
    cin >> N;

    vector<string> s(N + 1);
    vector<string> t(N + 1);

    for (int i = 1; i <= N; i++)
    {
        cin >> s.at(i) >> t.at(i);
    }

    // あだ名の候補
    vector<string> a_s(N + 1);
    vector<string> a_t(N + 1);
    a_s = s;
    a_t = t;

    // 性がおなじなら名前にする
    for (int i = 1; i <= N; i++)
    {
        int sCount = 0, tCount = 0, count = 0;
        for (int j = 1; j <= N; j++)
        {
            if (i == j)
            {
                continue;
            }
            // 性となまえ　比較
            if (s.at(i) == t.at(j))
            {
                count++;
            }
            // 名前が同じ
            if (a_s.at(i) == s.at(j))
            {
                sCount++;
            }
            if (a_t.at(i) == t.at(j))
            {
                tCount++;
            }
            //同名
            if (a_s.at(i) == s.at(j) || a_t.at(i) == t.at(j))
            {
                cout << "No" << endl;
                return 0;
            }
        }

        if (sCount > 0 && tCount > 0 && count > 0)
        {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}
