#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,count = 0;
  cin >> n;
  vector<int> num(n);
  for(int i = 0;i < n;i++){
    cin >> num.at(i);
  }
  bool two = true;
  while(two){
    for(int i = 0;i < n; i++){
      if(two){
        if(num.at(i)%2==0){
          num.at(i)/=2;
        }else{
          two=false;
          break;
        }
      }
    }
    if(two) count ++;
  }
  cout << count << endl;
  return 0;
}