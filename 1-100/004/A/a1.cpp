// #include <bits/stdc++.h>

// using namespace std;
// using ll = long long;

// int main() {

//     ll A, B, C;
//     cin >> A >> B >> C;

//     ll min_l = min({A, B, C});
//     ll side_a = min_l / 2;
//     ll side_b = min_l - side_a;

//     ll ans;
//     if (A == min_l) {
//         ans = (side_b - side_a) * B * C;
//     } else if (B == min_l) {
//         ans = (side_b - side_a) * A * C;
//     } else if (C == min_l) {
//         ans = (side_b - side_a) * A * B;
//     }

//     cout << ans << endl;

//     return 0;
// }