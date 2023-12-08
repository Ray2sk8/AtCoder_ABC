#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
#pragma GCC optimize("-O3")
using namespace std;
void _main();
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    _main();
}
//---------------------------------------------------------------------------------------------------
/*---------------------------------------------------------------------------------------------------
　　　　　　　　　　　 ∧＿∧
　　　　　 ∧＿∧ 　（´<_｀ ）　 Welcome to My Coding Space!
　　　　 （ ´_ゝ`）　/　 ⌒i
　　　　／　　　＼　 　  |　|
　　　 /　　 /￣￣￣￣/　　|
　 ＿_(__ﾆつ/　    ＿/ .| .|＿＿＿＿
　 　　　＼/＿＿＿＿/　（u　⊃
---------------------------------------------------------------------------------------------------*/

int N, M;
set<pair<int, int>> E;
//---------------------------------------------------------------------------------------------------
string solve()
{
    rep(i, 1, N - 1)
    {
        if (E.count({0, i}) && E.count({i, N - 1}))
            return "POSSIBLE";
    }
    return "IMPOSSIBLE";
}
//---------------------------------------------------------------------------------------------------
void _main()
{
    cin >> N >> M;
    rep(i, 0, M)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        E.insert({a, b});
        E.insert({b, a});
    }

    cout << solve() << endl;
}