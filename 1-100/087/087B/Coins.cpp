/*
0≤A,B,C≤50
A+B+C≥1
50≤X≤20,000
A,B,C は整数である
X は 50 の倍数である
*/



#include <iostream>

using namespace std;

int main(void){

    int FiveHun,OneHun,Fifty,Sum;//入力
    int count = 0;
    int Num500,Num100,Num50;//枚数
    bool flgCal = true;

    cin >> FiveHun >> OneHun >> Fifty;
    cin >> Sum;

    /*
        条件設定    
    */
    if(FiveHun*500 + OneHun*100 + Fifty*50 < Sum || FiveHun+OneHun+Fifty < 0 
    || Sum < 50 || 20000 < Sum || Sum%50 != 0 
    || FiveHun > 50 || OneHun > 50 || Fifty > 50 )//満たすときfalse
    {
        flgCal = false;
    }

    while (flgCal)//計算
    {
        int n = Sum;
        if(Sum >= 500){//最大硬化：500 の処理
            Num500 = n/500;//500円玉の枚数
            if(Num500 > FiveHun)//指定した枚数より多いとき
                Num500 = FiveHun;
            // cout << "500円玉の枚数:" << Num500 << endl;

            for(int i = Num500;i > 0;i--){//0枚になるまで
                n = n - i*500;//500円玉払った後の値段
                int nTmp = n;//500円玉払った後の値段を一時的に格納する
                Num100 = n/100;

                if(Num100 > OneHun)//指定枚数より多いとき
                    Num100 = OneHun;

                for(int j = Num100;j >= 0;j--){//100円玉が0枚になるまで 0枚でもOK
                    n = n - j*100;//100円玉払った後の値段
                    Num50 = n/50;
                    if(Num50 > Fifty)//指定枚数より多いとき
                        Num50 = Fifty;

                    for(int k = Num50;k >= 0;k--){//0枚になるまで
                        n = n - k*50;//50円玉払った後の値段
                        if(n!=0){//0円出ないならエラー  
                            // cout << "Error 500" << endl;
                            break;
                        } else if(n == 0){
                        n = nTmp;
                        // cout <<"500count 500:"<< i << " 100:" << j << " 50:" << k << endl;
                        count+=1;
                        }

                    }
                    n = nTmp;
                
                }
                n = Sum;//本来の金額

            }
        }
        n = Sum;
        if(Sum >= 100){//最大硬化：100
            Num100 = n/100;
            if(Num100 > OneHun)//指定枚数より多いとき
                Num100 = OneHun;
            // cout << "100円玉の枚数:" << Num100 << endl;

            for(int i = Num100;i > 0;i--){//0枚になるまで
                n = n - i*100;//100円玉払った後の値段
                int nTmp = n;//100円玉を使い終わった後の値段

                Num50 = n/50;
                if(Num50 > Fifty)//指定枚数より多いとき
                    Num50 = Fifty;
                
                for(int j = Num50;j >= 0;j--){//0枚になるまで
                    n = n - j*50;//50円玉払った後の値段
                    if(n!=0){//0円出ないならエラー  
                        // cout << "Error 100" << endl;
                        break;
                    } else if(n == 0){
                        n = nTmp;
                        // cout << i << ":500count 100:"<< i << " 50:" << j << endl;
                        count+=1;
                    }
                    n = nTmp;
                }
                n = Sum;
            }
        }

        n = Sum;
        if(Sum >= 50){//最大硬化：50  
            Num50 = n/50;
            if(Num50 > Fifty)//指定枚数より多いとき
                Num50 = Fifty;

            for(int i = Num50;i > 0;i--){//0枚になるまで
                n = n - i*50;//50円玉払った後の値段

                if(n!=0){//0円出ないならエラー  
                    // cout << "Error 50" << endl;
                    break;
                }
                n = Sum;
                    // cout << i << ":500count 50:"<< i <<  endl;
                count+=1;
            }
        }
        flgCal = false;
    }
    
    cout << count << endl;

    return 0;
}