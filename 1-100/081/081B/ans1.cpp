#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
 
int main() {
	int n;
	int A[200];
	int i;
	int count = 0;
	bool check = true;
 
	//配列の大きさを入力
	cin >> n;
 
	//配列の要素を入力
	for (i = 0; i < n; i++) cin >> A[i];
 
	//偶数判定
	while (1) {
		for (i = 0; i < n; i++) {
			if (A[i] % 2 == 1 || A[i] == 0) {
				check = false;
				break;
			}
			A[i] = A[i] / 2;
		}
		if (check) {
			count++;
		}
		else {
			break;
		}
	}
	cout << count << endl;
	return 0;
}