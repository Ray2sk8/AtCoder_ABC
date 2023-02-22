/**
 * @file b.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-22
 * 
 * @copyright Copyright (c) 2023
 * 
 *  2023-02-22 15:28:55 
 *             15:49
 * 
 */

#include <iostream>

using namespace std;

int main(){

    int A,B;
    cin >> A >> B;

    int A_num = 0;
    
    int nowTap = 1;//今の電源の口の数

    while(nowTap < B ){
        nowTap += A -1;
        A_num++;
    }

    cout << A_num << endl;


    return 0;
}