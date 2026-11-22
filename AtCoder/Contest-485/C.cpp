#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    vector<int> C(N);
    for (int i = 0; i < N; i++) {
        cin >> C[i];
    }

    vector<int> left_dist(N, 1e9);
    vector<int> right_dist(N, 1e9);

    // Pass 1: Left to Right
    int last_diff = -1;
    for (int i = 1; i < N; i++) {
        if (C[i] != C[i - 1]) {
            last_diff = i - 1;
        }
        if (last_diff != -1) {
            left_dist[i] = i - last_diff;
        }
    }

    // Pass 2: Right to Left
    last_diff = -1;
    for (int i = N - 2; i >= 0; i--) {
        if (C[i] != C[i + 1]) {
            last_diff = i + 1;
        }
        if (last_diff != -1) {
            right_dist[i] = last_diff - i;
        }
    }

    // Final Answer
    for (int i = 0; i < N; i++) {
        cout << min(left_dist[i], right_dist[i]) << " ";
    }
    cout << endl;

    return 0;
}