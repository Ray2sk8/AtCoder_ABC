#include <iostream>

using namespace std;

bool initStts(const char *s){

    bool flg = true;

    switch (*s)
    {
    case 'H':
    case 'D':
    case 'C':
    case 'S':
        break;

    default:
        flg = false;
        return flg;
    }
    s++;

    cout << "flg initStts:" << flg << endl;
    cout << *s << endl;

    switch (*s)
    {
    case 'A':
    case 'T':
    case 'J':
    case 'Q':
    case 'K':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        break;
    
    default:
        flg = false;
        return flg;
    }    

    cout << "flg initStts:" << flg << endl;

    return flg;

}



// bool Match_OR_Not(int N,string s[N]){


// }










int main(void){

    int N;
    cin >> N;

    char s[N];
    bool flgAns = true;

    //文字列の入力
    for(int i=0; i<N; i++){
        cin >> s[i];
        flgAns = initStts(&s[i]);
        cout << "flg for:" << flgAns << endl;
    }

    if(flgAns == true)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}