#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ll N;
    cin >> N;
    int count = 0;
    bool ans = false;

    for (int a = 1; a <= N - 1; a++)
    {
        for (int b = a; b <= (N - 1) / a; b++)
        {
            for (int c = 1; c <= (N - (a * b)) + 1; c++)
            {
                for (int d = c; d <= (N - ((a * b) + c) + 1); d++)
                {
                    if ((a * b + c * d) == N)
                    {
                        count++;
                        break;
                    }
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}