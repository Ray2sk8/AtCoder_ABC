#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    string str;
    cin >> str;

    char first = str[0];
    int num = 1;
    int num2 = 0;


    for (int i = 1; i < str.size(); i++) {
        if (first != str[i] && num2 == 0) {
            // 二つ目初出現
            num2 = i + 1;
            break;
        }
    }

    int ans1 = 0;
    int ans2 = 0;

    for (int i = 0; i < str.size(); i++) {
        if (first == str[i]) {
            ans1++;
        } else if(first != str[i]) {
            ans2++;
        }

        if(ans1 >= 2 or ans2 >= 2) {
            break;
        }
    }

    if (ans1 == 1) {
        cout << num << endl;
    } else {
        cout << num2 << endl;
    }

    return 0;
}