#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void){
    int N;
    int countSteps = 0;//段数
    do
    {
        cin >> N;
    } while (N<1);
    
    vector<int> v(N);//入力数

    for(int i=0;i<N;i++){
        int x;
        cin >> x;//cm 入力
        v[i] = x;
    }

    sort(v.begin(), v.end(), greater<int>() );

    int x = 0;
    int i = 0;

    // for(int j=0;j<N;j++){
    //     cout << v[j] << " ";
    // }   cout <<endl;

    do{

        if(v[i] == x){//ひとつ前と同じ大きさ
            //数えない
        }else{
            //数える
            countSteps++;
            // cout << "今のcm:" << v[i] << endl;
        }

        x = v[i];
        i++;
    }while(i<N);

    cout << countSteps <<endl;

    return 0;
}