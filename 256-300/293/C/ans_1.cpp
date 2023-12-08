#include<bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0);
  	
  	int h,w,ans=0;
  	//insert
    cin>>h>>w;
  	vector<vector<int>> a(h,vector<int>(w));
  	for(int i=0;i<h;i++){
  		for(int j=0;j<w;j++){
  			cin>>a[i][j];
  		}
  	}

    //calculate path
  	vector<int> p(h+w-2);
  	for(int i=0;i<h+w-2;i++){
  		if(i<h-1){
  			p[i]=0;//縦が0
  		}
  		else{//横が1
  			p[i]=1;
  		}
  	}

    //answer
  	do{
  		int x=0,y=0;
  		set<int> se;
  		se.insert(a[0][0]);
  		for(int i=0;i<h+w-2;i++){
  			if(p[i]){
  				y++;
  			}
  			else{
  				x++;
  			}
  			se.insert(a[x][y]);
  		}
  		if(se.size()==h+w-1){
  			ans++;
  		}
  	}while(next_permutation(p.begin(),p.end()));
  	cout<<ans<<'\n';
  	return 0;
}