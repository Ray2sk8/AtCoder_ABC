/****
 * https://atcoder.jp/contests/abc051/submissions/39388686
 * 
 * 
 * 
*/


// LUOGU_RID: 103593847
#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]==',') cout<<' ';
		else cout<<s[i];
	}
	cout<<endl;
	return 0;
}