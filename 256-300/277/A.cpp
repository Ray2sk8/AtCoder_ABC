//30m
#include <iostream>

using namespace std;

int main(void){

    int num, X;
    cin >> num >> X;

    int P[num];
    int ans;

    for(int i=0; i<num; i++)
    {
        cin >> P[i];
       if(P[i] == X){
        ans = i +1;
        //cout << ans << endl;
       }
    }

    // show arrary
    for(int j = 0; j<num; j++){
        cout << P[j] << " " ;
    }   

    cout << ans << endl;

    return 0;
}