#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define endl '\n' // endl se fast hota hai kyunki flush nahi karta

void solve() {
    int K;
    cin >> K;

    vector<int> A(K);
    for(int i = 0; i < K; i++){
        cin >> A[i];
    }

    int min = INT_MAX;
    bool found9 = false;
    for(int i = 0; i < K; i++){
        if(A[i] < min ){
            min = A[i];
        }
        if(A[i] == 9){
            found9 = true;

        }
        
    }
    if(found9){
        cout << min << "\n";
    }
    else{
        cout << -1 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t; // Agar question mein sirf 1 test case ho, toh is line ko comment kar do
    while (t--) {
        solve();
    }
    return 0;
}