#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n;
  	cin >> n;
  	int sum = 0;
  	vector<int> a(n);
  	for (int &x : a) cin >> x;
  	for (int i = 0; i < n; i++) {
    	sum |= a[i];
    }
  	int ans = 0;
  	while((sum&1) == 0) {
    	sum = sum >> 1;
      	ans++;
    }
  	cout << ans;
  	
  	return 0;
}