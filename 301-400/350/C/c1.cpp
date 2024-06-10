#include <iostream>
#include <vector>
#include <utility> // for std::pair, std::make_pair

using namespace std;

int main() {
    int N;
    cin >> N;

    // Initialize arrays
    vector<int> A(N + 1);
    vector<int> pos(N + 1);
    for (int i = 1; i <= N; ++i) {
        cin >> A[i];
        pos[A[i]] = i;
    }

    vector<pair<int, int>> swaps;

    for (int i = 1; i <= N; ++i) {
        if (A[i] != i) {
            // Correct position for A[i]
            int correct_pos = pos[i];

            // Record the swap
            swaps.push_back(make_pair(i, correct_pos));

            // Swap A[i] and A[correct_pos]
            swap(A[i], A[correct_pos]);

            // Update positions in the pos array
            pos[A[correct_pos]] = correct_pos;
            pos[A[i]] = i;
        }
    }

    // Output the swaps
    for (const auto& swap_pair : swaps) {
        cout << swap_pair.first << " " << swap_pair.second << endl;
    }

    return 0;
}
