
#include <iostream>
#include <string.h>
#include <algorithm> 



using namespace std;


int main(void){

    //put in String
    string s;
    cin >> s;
    bool compStr = true;//比較するかどうか
    bool ans = true;//解があるか

    int i = 0;
    while (s[i] != '\0' && compStr == true)
    {

        //cout << "Begin:" <<s[i] << endl; 
        //dreamer 5文字
        if(s[i] == 'd'){//d 始まり
            if( s.compare(i, 5, string("dream"), 0, 5 ) == 0) {

                //dreamer erase 判定
                //erase -> dream 確定
                //er 続きの時:
                if( s.compare(i+5, 5, string("erase"), 0, 5 ) == 0 ) {
                    //cout << "dream:" ;
                    //erase は5文字
                    i+=5;
                } 
                // dreamer 
                else if( s.compare(i, 7, string("dreamer"), 0, 7 ) == 0) {
                    //cout << "dreamer:" ;
                    //dreamer は7文字
                    i+=7;
                } else {
                compStr = true;
                ans = true; 
                i+= 5;
                //cout <<"JustDream:" << endl;                
                }

            } else {
                //先頭がdなだけ
                compStr = false;
                ans = false;
                //cout << "JustD";
            }
        } else if(s[i] == 'e'){//e 始まり
            if( s.compare(i, 6, string("eraser"), 0, 6 ) == 0) {//先に eraser　から考える
                //cout << "eraser" ;
                //eraser は6文字
                i+=6;
            } else if( s.compare(i, 5, string("erase"), 0, 5 ) == 0) {
                //cout << "erase" ;
                //erase は5文字
                i+=5;
            } else {
                //先頭がeなだけ
                compStr = false;
                ans = false;
                //cout << "JustE";
            }              
        } else {//e , d 始まりではない
            compStr = false;
            ans = false;  
            //cout << "Else" <<s[i] << endl;          
        }

    }

    if(ans == true){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;        
    }
    




    return 0;
}