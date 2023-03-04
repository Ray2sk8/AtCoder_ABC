#include  <iostream>

using namespace std;

int main()

{

	int N,R;	cin >> N >> R;

	

	if(N < 10){

	    R = R + 100 *(10 - N);

	} 

	

	cout << R ;

	

}