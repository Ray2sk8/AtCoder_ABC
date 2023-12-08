#include <bits/stdc++.h>

using namespace std;
int H[1 << 20];
int N;

int main() {

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> H[i];
    }

    int head = H[0];
    int num = 0;
    int maxN = 0;
    for (int i = 1; i < N; i++) {
        // cout << H[i] << " " << maxN << " " << num << endl;
        if (head >= H[i]) {
            num++;
            head = H[i];
        } else {
            maxN = max(maxN, num);
            head = H[i];
            num = 0;
        }
    }
    maxN = max(maxN, num);
    cout << maxN << endl;

    return 0;
}