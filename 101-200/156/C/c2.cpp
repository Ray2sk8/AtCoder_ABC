#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {

    int N;
    cin >> N;
    long long sum = 1 << 18;

    vector<int> X(N);

    for (int i = 0; i < N; i++) {
        cin >> X[i];
    }

    for (int i = 1; i <= 100; i++) {
        long long sum1 = 0;
        for (int j = 0; j < N; j++) {
            sum1 += (X[j] - i )*(X[j] - i );
        }
        sum = min( sum, sum1 );
    }

    cout << sum << endl;

    return 0;
}