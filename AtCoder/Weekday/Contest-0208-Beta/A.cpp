#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve() {
    int N, M;
    cin >> N >> M;

    int ans = 0;
    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;
        int tickets = A / 100;
        ans += min(tickets, M);
    }

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
