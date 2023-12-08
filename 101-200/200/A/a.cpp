/**
 *  14:13 start
 * 
 *  14:18 end
*/

#include <iostream>

using namespace std;

int main(){

    int N;
    do{
    cin >> N;
    }while( N < 1 or 3000 < N );

    int ans;
    if(N%100 == 0){
        ans = N/100;
    } else {
        ans = N/100 + 1;
    }


    cout << ans <<  endl;
    

    return 0;
}