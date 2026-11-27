#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define endl '\n' 

void solve() {
    string s;
    cin >> s;


    int count = s.size() - 2;
    char f = s.front() , l = s.back();
    
    if(s.size() <= 10){
        cout << s << '\n';
    }
    else{
        cout << f << count << l << '\n';
    }  
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