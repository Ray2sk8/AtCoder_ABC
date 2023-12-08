#include <iostream>
#include <math.h>

using namespace std;

int main(void){

    int Natsume=-1,Higuchi=-1,Noguchi = -1;
    // bool ans = false;

    int N,Y;//金額と枚数
    do{
    cin >> N;
    }while( !(1 <= N && N <= 2000) );

    do{
    cin >> Y;
    }while( !(1 <= N && N <= 2*pow(10,7)) && Y%1000 == 0 );

    for(int i=0;i<=N;i++){
        for(int j=0;j<=N-i;j++){
            // if(k >0= 0) の時、下のfor分処理を行う
            // 計算処理の簡略化
            for(int k=0;k<=N-i-j;k++){             
                if(i+j+k == N && i*10000 + j*5000 + k*1000 == Y){
                    // cout をここに入れる。またreturn ですぐに中断
                    Natsume=i;
                    Higuchi=j;
                    Noguchi=k;
                    break;
                    // cout << "Ans" ;
                    // ans = true;
                }
                // if(ans)
                // cout << "OverWork" << endl;

            }
        }    
    }


    cout << Natsume<< " " << Higuchi << " " << Noguchi << endl;

    return 0;
}