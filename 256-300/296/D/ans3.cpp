#define _DEBUG
#include "bits/stdc++.h"
// #include <atcoder/all>
#define CHOOSE(a) CHOOSE2 a
#define CHOOSE2(a0, a1, a2, a3, a4, a5, x, ...) x
#define debug_1(x1) cerr << #x1 << ": " << x1 << endl
#define debug_2(x1, x2)                                                        \
    cerr << #x1 << ": " << x1 << ", " #x2 << ": " << x2 << endl
#define debug_3(x1, x2, x3)                                                    \
    cerr << #x1 << ": " << x1 << ", " #x2 << ": " << x2 << ", " #x3 << ": "    \
         << x3 << endl
#define debug_4(x1, x2, x3, x4)                                                \
    cerr << #x1 << ": " << x1 << ", " #x2 << ": " << x2 << ", " #x3 << ": "    \
         << x3 << ", " #x4 << ": " << x4 << endl
#define debug_5(x1, x2, x3, x4, x5)                                            \
    cerr << #x1 << ": " << x1 << ", " #x2 << ": " << x2 << ", " #x3 << ": "    \
         << x3 << ", " #x4 << ": " << x4 << ", " #x5 << ": " << x5 << endl
#define debug_6(x1, x2, x3, x4, x5, x6)                                        \
    cerr << #x1 << ": " << x1 << ", " #x2 << ": " << x2 << ", " #x3 << ": "    \
         << x3 << ", " #x4 << ": " << x4 << ", " #x5 << ": " << x5 << ", " #x6 \
         << ": " << x6 << endl
#ifdef _DEBUG
#define debug(...)                                                             \
    CHOOSE((__VA_ARGS__, debug_6, debug_5, debug_4, debug_3, debug_2, debug_1, \
            ~))                                                                \
    (__VA_ARGS__)
#else
#define debug(...)
#endif
#define rep(index, num) for (int index = 0; index < (int)num; index++)
#define rep1(index, num) for (int index = 1; index <= (int)num; index++)
#define brep(index, num) for (int index = (int)num - 1; index >= 0; index--)
#define brep1(index, num) for (int index = (int)num; index > 0; index--)
#define scan(argument) cin >> argument
#define prin(argument) cout << argument << endl
#define prind(argument)                                                        \
    cout << std::fixed << setprecision(13) << argument << endl
#define kaigyo cout << endl
#define eps 1e-7
#define PI acosl(-1)
#define mp(a1, a2) make_pair(a1, a2)
#define ALL(a) (a).begin(), (a).end()
#define rALL(a) (a).rbegin(), (a).rend()
#define puba emplace_back
#define pubamp(a, b) emplace_back(mp(a, b))
typedef long long ll;
typedef long double ld;
using namespace std;
// using namespace atcoder;
typedef pair<ll, ll> pll;
typedef pair<int, int> pint;
typedef vector<int> vint;
typedef vector<ll> vll;
typedef vector<vint> vvint;
typedef vector<vll> vvll;
typedef vector<pint> vpint;
typedef vector<pll> vpll;
template <class T> using priq = priority_queue<T>;
template <class T> using priqs = priority_queue<T, vector<T>, greater<T>>;
template <class T, class U> bool chmax(T &a, const U &b) {
    if (a < b) {
        a = b;
        return 1;
    }
    return 0;
}
template <class T, class U> bool chmin(T &a, const U &b) {
    if (a > b) {
        a = b;
        return 1;
    }
    return 0;
}
template <class T> void soun(T &v) {
    sort(ALL(v));
    v.erase(unique(v.begin(), v.end()), v.end());
}
ll INFl = (ll)1e+18 + 1;
int INF = 1e+9 + 1;
int main() {
    ll N, M;
    scan(N >> M);
    ll sqN = sqrt(N + eps);
    ll ans = INFl;
    ll maxi = max(1000000LL, sqN);
    rep1(i, maxi) {
        ll a = i;
        ll b = M / a + (M % a != 0);
        if (a * b >= M && a <= N && b <= N)
            chmin(ans, a * b);
    }
    if (ans == INFl)
        prin(-1);
    else
        prin(ans);
    return 0;
}
