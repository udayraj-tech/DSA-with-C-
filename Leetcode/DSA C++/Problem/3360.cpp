#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

class Solution {
public:
    bool canAliceWin(int n) {
        int stone = 10;
        int count = 0;
        while(n >= stone){ 
            n = n - stone--;
            count++; 
        }
        if(count % 2 == 0){
            return false;
        }
        else{
            return true;
        }
    }
};

void solve() {
    Solution obj;
    int n;
    cin >> n;
    int ans = obj.canAliceWin(n);

    if(ans){
        cout << "true";
    }else{
        cout << "false";
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
