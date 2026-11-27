#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define endl '\n' // endl se fast hota hai kyunki flush nahi karta

void solve() {
    int K;
    cin >> K;

    if(K > 2 && K % 2==0){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
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