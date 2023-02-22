#include <iostream>


using namespace std;

int main(void){

    string S;
    cin >> S;
    int count = 0;
    int ansWhere = -2;//あとで１足す

    while(S[count] != '\0'){
        if(S[count] == 'a'){
            ansWhere = count;
        }
        count++;
    }

    cout << ansWhere + 1 << endl;

    return 0;
}