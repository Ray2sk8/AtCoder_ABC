#include <iostream>

using namespace std;

int main(void){

    int num;
    int CalCount = 0;
    bool flgCal = true;

    cin >> num;

    int n[num];

    for(int i = 0; i<num;i++){
        
        cin >> n[i];
    }

    for(int i = 0; i<num; i++){//under 0 or Odds are detected
        if(n[i] < 1 || n[i]%2 != 0){
            flgCal = false;//計算終了
            break;
        }
    }

    while(flgCal){

        for(int i = 0; i<num; i++){//0 or Odds are detected
            if(n[i] == 1 || n[i]%2 != 0){
                flgCal = false;//計算終了
                break;
            }
        }

        if(flgCal == false)
            break;//処理を行わない

        for(int i=0;i<num;i++){
            n[i]=n[i]/2;
            if(n[i] == 1){//１を割った
                flgCal = false;
            }

        }

        CalCount++;
    }

    cout << CalCount << endl;

    return 0;
}