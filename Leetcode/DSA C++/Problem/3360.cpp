#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

class Solution {
public:
    bool canAliceWin(int n) {
        int ans = 0;
        while(n > 0){
            ans = n - 10;
        }
        
    }
};

bool solve() {
    Solution obj;
    int n;
    cin >> n;
    int ans = obj.canAliceWin(n);
    if(ans){
        return true;
    }
    else{
        return false;
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
