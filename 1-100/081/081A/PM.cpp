#include <iostream>

using namespace std;

int main(){
    int num,n1,n2,n3;
    int count = 0;
    cin >> num;
    // cin >> n2;
    n1 = num/100;
    n2 = (num - n1*100 )/10;
    n3 = num%10;

    if(n1==1)
        count++;
    if(n2 == 1)
        count++;
    if(n3 == 1)
        count++;

    cout << count << endl;

    return 0;

}