#include <iostream>
#include <vector>

using namespace std;


int main(void){

  int N;
  do{
    cin >> N;
  }while(N < 1);

  vector<int> T(N);
  vector<int> X(N);
  int Xp=0,Xm=0;
  vector<int> Y(N);
  int Yp=0,Ym=0;
  vector<int> flgAns(N,false);

  for(int i=0;i<N;i++){
    cin >> T[i] >> X[i] >> Y[i];
  }

    //先頭に0
  vector<int>::iterator itr;
  itr = X.begin();
  itr = X.insert(itr,0);

  itr = Y.begin();
  itr = Y.insert(itr,0);

  itr = T.begin();
  itr = T.insert(itr,0);

  itr = flgAns.begin();
  itr = flgAns.insert(itr, true);

  int xTemp,yTemp,timeTemp;
  //次の秒との偏差　N回試行
  //N+1, N の差
  for(int num=1;num<=N;num++){

    xTemp = X[num]-X[num-1];
    yTemp = Y[num]-Y[num-1];
    timeTemp = T[num]-T[num-1];
    // cout << "xTemp:" << xTemp << "yTemp:" << yTemp << "timeTemp" <<  timeTemp <<endl;

    //次の値がマイナス
    if( abs(xTemp) + abs(yTemp) >  timeTemp || timeTemp < 0){
      // cout << "時間が足りません" ;
      cout << "No" << endl;
      return 0;
    }

    //最短距離が奇数ー＞xとyの試行回数も奇数
    //         偶数                   偶数
    if( ( abs(xTemp)+abs(yTemp) )%2 == 0 ){
      //時間が偶数で最短距離が奇数
      if(timeTemp%2 != 0){
        cout << "No" << endl;
        return 0;
      }
    } else {
      //時間が奇数で最短距離が偶数
      if(timeTemp%2 == 0){
        cout << "No" << endl;
        return 0;
      }
    }



      int SumX;
      int SumY;
    //x座標の選定
    for(int i=timeTemp;i>=xTemp;i--){

      
      Xp= i;//プラスのx
      Xm=i-xTemp;//マイナスのx
      //合計はX座標の偏差
      //まずない
      // いらないしこう
      if(xTemp != Xp - Xm){
        // cout << "xTemp Error";
        // cout << "Xp:" << Xp << " Xm:" << Xm << " SumX" << SumX << endl;
        cout << "No" << endl;
        return 0;
      }
      SumX = Xp+Xm;

      //Xmがマイナス->不適切な解
      if( ( Xm || Xp || timeTemp - SumX) <0 ){
      // cout << "xminus終了";
       cout << "No" << endl;
        return 0;
      }



        //xで使った分は最大値から減らす
        // 使える時間：time - (Xplus + Xminus )
        for(int j=timeTemp-SumX;j >= yTemp;j-- ){
          //負なら不適切な解答
          Yp=j;//プラスのy
          Ym=j-yTemp;//マイナスのy
          //合計はX座標の偏差
          if(yTemp != Yp - Ym || (Yp || Ym ) < 0  ){
            // cout << "yTemp Error";
            return 0;
          }
          SumY = Yp+Ym;



          //時間のを満たすとき
          if(SumX + SumY == timeTemp and xTemp == Xp - Xm and yTemp == Yp - Ym ){
              // cout << "AnsOK " << endl;;
              // cout << "Xp:" << Xp << " Xm:" << Xm << " SumX" << SumX ;
            //   // cout << " Yp:" << Yp << " Ym:" << Ym << " SumY" << SumY << " time" << timeTemp<< endl;
            // cout << "Yes" << endl;
            flgAns[num] = true;
          }

        }
    }
  }

  for(int i=0; i<=N; i++){
    if(flgAns[i] == false){
      cout << "No" << endl;
      return 0;
    } 

  }

  cout << "Yes" << endl;
  return 0;

}