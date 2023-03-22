#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
using namespace std;
using P = pair<int, int>;
using ll = long long;

const vector<int> di = {-1, 0, 1, 0};
const vector<int> dj = {0, 1, 0, -1};

int char_to_direction(char c) {
    if (c == 'U') return 0;
    if (c == 'R') return 1;
    if (c == 'D') return 2;
    if (c == 'L') return 3;
    return 0;
}

int main()
{
    int h, w;
    cin >> h >> w;
    vector<string> g(h);
    rep(i,h) cin >> g[i];

    set<P> st;
    P now = {0, 0};
    st.insert(now);

    while(true) {
        auto [i, j] = now;
        int d = char_to_direction(g[i][j]);
        int ni = i + di[d], nj = j + dj[d];
        if (ni < 0 || ni >= h || nj < 0 || nj >= w) {
            cout << i+1 << " " << j+1 << endl;
            return 0;
        }
        if (st.find({ni, nj}) != st.end()) {
            cout << -1 << endl;
            return 0;
        }
        now = {ni, nj};
        st.insert(now);
    }

    return 0;
}

