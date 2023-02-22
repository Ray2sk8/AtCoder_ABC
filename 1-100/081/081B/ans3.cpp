#include <iostream>
#include <vector>
using namespace std;

int main(void){
    
    int N, number, count;
    bool check;
    vector<int> vec;
   
    cin >> N;
    
    for (int i = 0; i < N; i ++) {
        cin >> number;
        vec.push_back(number);
    }
    
    count = 0;
    while (true) {
        check = true;
        for (int i = 0; i < N; i ++) {
            if (vec.at(i) % 2) {
                check = false;
            } else {
                vec.at(i) /= 2;
            }
        }
        if (!check) {
            break;
        } else {
            count ++;
        }
    }
    
    cout << count << endl;
    
    return 0;
    
}
