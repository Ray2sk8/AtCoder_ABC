#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int countDigits(int n){

    int i = 0;

    while(n >= 10){
        n = n/10;
        i++;
    }

    int x = 10;
    while (i > 0)
    {
        x = x*10;
        i--;        
    }
    
    return x;
}



int main(void) {
    

    int  a,b;
    cin >> a >> b;
    a = a* countDigits(b) ;
    
    int  ans;
    ans = a + b ;

    // cout << ans;
    // cout << " a:"<< a << " b:" << b << endl;; 

    for(int i = 0; i<=100100 + 1; i++){
       if(i*i == ans){
        cout << "Yes" << endl;
        return 0;
       } 
    }

    cout << "No" << endl;
    return 0;

}