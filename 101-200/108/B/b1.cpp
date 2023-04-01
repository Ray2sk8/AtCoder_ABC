#include <bits/stdc++.h>

using namespace std;
using ll = long long;

pair<int, int> p, p2, p3, p4;
pair<int, int> v, v2, v3, v4;

bool sizeV(pair<int, int> t, pair<int, int> t2) {

    int sT = t.first * t.first + t.second * t.second;
    int sT2 = t2.first * t2.first + t2.second * t2.second;
    bool ret = false;
    if (sT == sT2) {
        ret = true;
    }
    return ret;
}

int main() {
    // x1 y1 x2 y2
    cin >> p.first >> p.second >> p2.first >> p2.second;
    int MaxR = 400;

    v.first = p2.first - p.first;
    v.second = p2.second - p.second;

    bool ok = true;
    // X,Y:3　を考える
    for (int i = -MaxR; i <= MaxR && ok == true; i++) {
        for (int j = -MaxR; j <= MaxR && ok == true; j++) {
            v2.first = i - p2.first;
            v2.second = j - p2.second;
            if (sizeV(v, v2)) {
                int inner = v.first * v2.first + v.second * v2.second;
                int outer = v.first * v2.second - v.second * v2.first;
                if (inner == 0 && outer > 0) {
                    p3.first = i;
                    p3.second = j;
                    ok = false;
                    // cout << "i:" << i << " j:" << j << endl;
                    break;
                }
            }
        }
    }

    // x4,y4
    pair<double, double> On;
    On.first = (double)(p.first + p3.first) / 2;
    On.second = (double)(p.second + p3.second) / 2;
    // cout << "Ox:" << On.first << " Oy:" << On.second << endl;
    p4.first = 2 * On.first - p2.first;
    p4.second = 2 * On.second - p2.second;

    cout << p3.first << " " << p3.second << " " << p4.first << " " << p4.second
         << endl;

    return 0;
}