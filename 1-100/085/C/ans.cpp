#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#pragma GCC optimize ("-O3")
using namespace std; void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }
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


typedef long long ll;
int N; ll Y;
//---------------------------------------------------------------------------------------------------
void _main() {
    cin >> N >> Y;
    rep(a, 0, N + 1) rep(b, 0, N + 1) {
        int c = N - (a + b);
        if (0 <= c) {
            if (10000LL * a + 5000LL * b + 1000LL * c == Y) {
                printf("%d %d %d\n", a, b, c);
                return;
            }
        }
    }

    printf("-1 -1 -1\n");
}