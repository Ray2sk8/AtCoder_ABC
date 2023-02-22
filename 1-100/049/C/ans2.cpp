//Daydream (白昼夢)
//  https://atcoder.jp/contests/abs/submissions/36137766
//

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  string S;
  cin >> S;

  string T = "";

  vector<string> divide = {"dream", "dreamer", "erase", "eraser"};

  //reverse
  reverse(S.begin(),S.end());

  for(int i=0; i<4; i++){
    reverse(divide.at(i).begin(), divide.at(i).end());
  }


  bool can = true;
  for(int i=0; i<S.size();){
    bool can2 = false;
    for(int j=0; j<4; j++){
      string d = divide.at(j);
      if(S.substr(i,d.size()) == d){
        can2 = true;
        i+=d.size();
        break;
      }
    }
    if(!can2){
      can = false;
      break;
    }

  }



  if(can){cout << "YES" << endl;
  }else{cout << "NO" << endl;};

  return 0;

}
