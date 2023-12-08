#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ll N;
    cin >> N;
    int count = 0;
    int r = 0;
    int l = 0;

    for (int i = 1; i <= N; i++)
    { // 全探索
        int X = i;
        int Y = N - i;
        int r = 0;
        int l = 0;

        for (int a = 1; a * a <= X; a++)
        {
            if (X % a == 0)
            {
                r++;
                if (a*a != X)
                    r++;
            }
        }

        for (int a = 1; a * a <= Y; a++)
        {
            if (Y % a == 0)
            {
                l++;
                if (a*a != Y)
                    l++;
            }
        }
        count += r * l;
    }

    cout << count << endl;

    return 0;
}