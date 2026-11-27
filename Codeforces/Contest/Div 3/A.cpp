#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

long long get_gcd(long long x, long long y) {
    while (y != 0) {
        long long temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}


long long get_lcm(long long x, long long y) {
    return (x / get_gcd(x, y)) * y;
}

void solve() {
    long long l, a, b;
    cin >> l >> a >> b;

    long long ga = get_gcd(l, a);
    long long gb = get_gcd(l, b);

    long long common_step = get_lcm(ga, gb);
    
    cout << l / common_step << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}