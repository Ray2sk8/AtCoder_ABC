// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int N, A, B;
    string S;
    cin >> N >> A >> B >> S;

    int rank = 0;
    int abroadRank = 0;

    for (int i = 0; i < N; ++i)
    {
        if (S[i] == 'a')
        {
            if (rank < A + B){
                cout << "Yes" << endl, 
                ++rank;
            } else {
                cout << "No" << endl;
            }
        }
        else if (S[i] == 'b')
        {
            if ( rank < A + B && abroadRank < B){
                cout << "Yes" << endl;
                ++abroadRank;
                ++rank;
            }
            else
                cout << "No" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
