#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

static bool maxCard(vector<int>& x, int &AlicePoints, bool &turnAlice);

int main()
{	

    bool turnAlice = true;//アリスがカードを取るか否か
    bool matchCard = true;//試合を続けるか否か
    int AlicePoints = 0;//Alice's points

    int N;
    cin >> N;

    vector<int> x(N);
    //数字を入力
    for(int i = 0;i<N;i++){
        int a;

        do
        {//正の数のみ有効        
        cin >> a;
        } while (a < 1);
        // cout << "a:" << a << endl;

        x[i] = a;
        // cout << "x:" << x[i] << endl;
    }

    while(matchCard){  
    matchCard = maxCard(x,AlicePoints,turnAlice);
    }

    cout << AlicePoints << endl;

    return 0;   
}

/*
引数：  配列x
        AlicePoints
    bool turnALice
働き：  配列の最大値を取る。アリスかボブの得点にする。

*/
bool maxCard(vector<int>& x, int &AlicePoints, bool &turnAlice)
{
    bool nextCali = true;
    //最大値の計測
    vector<int>::iterator iter = std::max_element(x.begin(), x.end());
    //要素数
    size_t index = std::distance(x.begin(), iter); //x[index] :Max value

    
    if( x[index] == -1 ) {
        //すべてのカードを取ったとき
        nextCali = false;
        // cout << "done:";
    } else  if( x[index] > 0){ //取ったカードが有効なとき

        //得点の加算
        if(turnAlice){
            AlicePoints += x[index];
        } else 
            AlicePoints -= x[index];
        //使った配列を-1にする
        x[index] = -1;
        //turn を変える
        turnAlice = !turnAlice;        

        nextCali = true;
    }

    // cout << "NowAlice's Points:" << AlicePoints << endl;
    return nextCali;

}