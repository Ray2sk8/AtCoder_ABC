#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main(){
    int x,y,n;
    int ans = 0;
    cin >> x >> y >> n;
    if(n < 3){
        ans = n*x;
        cout << ans << endl;
        return 0;
    }

    //ばら売りのほうがやすいとき
    if( x*3 <= y ){
        ans = n*x;
    } else {
        ans = n/3*y + n%3*x;
    }


    cout << ans << endl; 

    return 0;
}