// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

pair<int, int> p, p2, p3, p4;

bool seiX3(int x, int y) {
    bool ret = false;

    int vx = x - p.first;
    int vy = y - p.second;

    double ax = (double)p2.first - (double)(p.first + x) / 2;
    double ay = (double)p2.second - (double)(p.second + y) / 2;

    // cout << "vx:" << vx << " vy:" << vy << " ax:" << ax << " ay:" << ay << endl;

    if (vx * (int)ax + vy * (int)ay == 0) {
        ret = true;
    }

    return ret;
}

int main() {

    // x1 y1 x2 y2
    cin >> p.first >> p.second >> p2.first >> p2.second;

    bool ok = true;
    int s = (p.first - p2.first) * (p.first - p2.first) +
            (p.second - p2.second) * (p.second - p2.second);
    // X,Y:3　を考える
    for (int i = -100; i <= 100 && ok == true; i++) {
        for (int j = -100; j <= 100 && ok == true; j++) {

            int s2 =
                (p.first - i) * (p.first - i) + (p.second - j) * (p.second - j);
            s2 /= 2;
            if (s == s2) {
                p3.first = i;
                p3.second = j;
                // ok = false;
                // cout << "i:" << i << " j:" << j << " s2:" << s2 << endl;
                if (seiX3(i, j)) {
                    ok = false;
                    break;
                }
                // break;
            }
        }
    }

    ok = true;

    // x4,y4
    pair<int, int> On;
    On.first = (p.first + p3.first) / 2;
    On.second = (p.second + p3.second) / 2;

    p4.first = 2 * On.first - p2.first;
    p4.second = 2 * On.second - p2.second;

    cout << p3.first << " " << p3.second << " " << p4.first << " " << p4.second
         << endl;

    return 0;
}
