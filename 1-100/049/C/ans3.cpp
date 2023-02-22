/*
うまい！！for-for　と substr の使い方


https://atcoder.jp/contests/abs/submissions/36137586

*/

#include <iostream>
#include <string>
#include <algorithm>

int main(){
  std::string word[4] = {"dream", "dreamer", "erase", "eraser"};
  std::string in;
  bool can = true;
  bool can2 = false;
  
  std::cin >> in;
  reverse(in.begin(), in.end());
  //word　に格納された文字を反転させる
  for(int j=0;j<4;j++){
    reverse(word[j].begin(), word[j].end());
  }
  //std::cout << in.substr(0,5) << std::endl;
  
  for(int i=0;i<in.size();){
    can2 = false;
    for(int j=0;j<4;j++){
        //
      if(in.substr(i,word[j].size())==word[j]){
        can2 = true;
        i += word[j].size();
        break;
      }
    }      
    if(!can2){
      can = false;
      break;
    }
  }
  if(can){
    std::cout << "YES" << std::endl;
  }else{
    std::cout << "NO" << std::endl;
  }
}