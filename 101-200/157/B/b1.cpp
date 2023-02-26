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

    // input
    // 穴が開いているのかtrueFalse判定
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


    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if ((A_match[i][0] == 1 && A_match[i][1] == 1 && A_match[i][2] == 1) || (A_match[0][i] == 1 && A_match[1][i] == 1 && A_match[2][i] == 1))
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    if (A_match[0][0] == 1 && A_match[1][1] == 1 && A_match[2][2] == 1)
    {
        cout << "Yes" << endl;
        return 0;
    }

    if (A_match[0][2] == 1 && A_match[1][1] == 1 && A_match[2][0] == 1)
    {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;

    return 0;
}
