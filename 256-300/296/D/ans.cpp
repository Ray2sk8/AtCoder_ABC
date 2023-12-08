#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define INF (long long)2e+18

int main() {
    long long n, m, b, ans = INF;
    cin >> n >> m;
    for (long long i = 1; i <= n; i++) {
        b = (m + i - 1) / i;
        if (b <= n) {
            ll x = i*b;
            ans = min(ans, x);
        }
        if (i > b) {
            break;
        }
    }

    if (ans == INF)
        cout << -1 << endl;
    else
        cout << ans << endl;
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

#define INF (long long)2e+18

int main() {
        long long n,m,x,ans=INF;
        cin>>n>>m;
        for(long long i=1;i<=n;i++){
                x=(m+i-1)/i;
                if(x<=n)ans=min(ans,i*x);
                if(i>x)break;
        }
        if(ans==INF)cout<<-1<<endl;
        else cout<<ans<<endl;
        return 0;
}

*/