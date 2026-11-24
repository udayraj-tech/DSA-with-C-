#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define endl '\n' // endl se fast hota hai kyunki flush nahi karta

void solve() {
    int N, M;
    cin >> N >> M;

    vector<string> A(N);
    for(int idx = 0; idx < N; idx++){
        cin >> A[idx];
    }

    for(int i = 0; i < N; i++){
        bool found = false;
        int ans = 0;

        for(int j = 0; j < M; j++){
            if(A[i][j] == 'o'){
                found = true;
                ans = j + 1;
                break;
            } 
        }
        if(found){
            cout << ans << '\n';
        }
        else{
            cout << -1 << '\n';
        }
        
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