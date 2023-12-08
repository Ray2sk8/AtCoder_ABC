#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
 
  int count =0;
  
  vector <int> even(N);
  for(int i=0; i<N; i++){
    cin >> even.at(i);
  }
  
  while(true){
    
    bool odd= false;
	for(int i=0; i<N; i++){
      if((even.at(i) % 2) != 0){
        odd=true;
      }
    }
      
    if(odd){
      break; 
    }
    for(int i=0; i<N; i++){
      even.at(i) /= 2;
    }
    count++;
  }
  
  cout << count << endl;
}
