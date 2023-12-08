#include <iostream>

using namespace std;

int main(){
    unsigned int n1,n2;
    
    cin >> n1 >> n2;
    // cin >> n2;
    
    if( (n1*n2)%2 == 0){
        cout << "Even";
    } else 
        cout << "Odd";

    return 0;

}