#include <bits/stdc++.h>

using namespace std;

vector<string> word = {"and", "not", "that", "the", "you"};

int main() {
    int n;
    cin >> n;
    bool res = false;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        //for (auto &nx : word) {
        for (auto nx : word) {
            if (s == nx) {
                res = true;
                // cout << s << endl;
                // nx = "BINGO!";
            }
        }
    }
    if (res) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    // for(auto x: word){
    //     cout << x << " ";
    // } cout << endl;

    return 0;
}
