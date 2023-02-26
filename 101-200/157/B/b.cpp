#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;
using ll = long long;

int main()
{
    vector<vector<int>> A(3, vector<int>(3));
    vector<vector<int>> A_match(3, vector<int>(3, -1));

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> A[i][j];
        }
    }

    int N;
    cin >> N;
    if (N <= 2)
    {
        cout << "No" << endl;
        return 0;
    }

    vector<int> B(N);

    //input 
    //穴が開いているのかtrueFalse判定
    for (int i = 0; i < N; i++)
    {
        // scanf("%d", &B[i]);
        cin >> B[i];

        for (int k = 0; k < 3; k++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (A[k][j] == B[i])
                {
                    A_match[k][j] = 1;
                    // cout << "k:" << k << " j:" << j ;
                    // cout << " Punch" << endl;
                }
            }
        }
    }

    int ans_w = 0;
    int ans_h = 0;
    int ans = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (A_match[i][j] == 1)
            {
                ans_w++;
                // cout << "i:" << i << " j:" << j << endl;
            }
            else if (A_match[j][i] == 1)
            {
                ans_h++;
                // cout << "i:" << j << " j:" << i << endl;
            }
        }

        if ((ans_w || ans_h) == 3)
        {
            // cout << "Yes_wh" << endl;
            cout << "Yes" << endl;
            return 0;
        }
        ans_h = 0;
        ans_w = 0;
    }

    for (int i = 0; i < 3; i++)
    {
        if (A_match[i][i] == 1)
        {
            ans++;
        }
    }

    if (ans == 3)
    {
        // cout << "Yes_ans" << endl;
        cout << "Yes" << endl;
        return 0;
    }

    ans == 0;
    for (int i = 0; i < 3; i++)
    {
        if (A_match[i][2 - i] == 1)
        {
            ans++;
        }
    }

    if (ans == 3)
    {
        // cout << "Yes_r" << endl;
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;

    return 0;
}
