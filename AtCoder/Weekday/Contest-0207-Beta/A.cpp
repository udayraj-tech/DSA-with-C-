#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define endl '\n' // endl se fast hota hai kyunki flush nahi karta

void solve() {
    int A, B, C;
    cin >> A >> B >> C;

    if(A + B == C){
        cout <<"Yes";
    
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