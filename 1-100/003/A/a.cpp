#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    string str;
    cin >> str;
    int N = str.size();
    int south = 0, north = 0, east = 0, west = 0;
    for (int i = 0; i < N; i++) {
        switch (str[i]) {
        case 'N':
            north++;
            break;
        case 'W':
            west++;
            break;
        case 'S':
            south++;
            break;
        case 'E':
            east++;
            break;
        default:
            break;
        }
    }

    if ((north == 0 && south != 0) || (north != 0 && south == 0)) {
        cout << "No" << endl;
    } else if( (east == 0 && west != 0) || (east != 0 && west ==0 ) ){
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
    
    return 0;
}