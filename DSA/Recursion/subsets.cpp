#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'

class Solution {

private:
void ps(vector<int> &nums, vector<int> output, int idx, vector<vector<int>> &ans) {

    if(idx >= nums.size()){
        ans.push_back(output);
        return ;
                              
    }

    // include kar do
    ps(nums, output, idx + 1, ans);

    // exclude kar do
    int element = nums[idx];
    output.push_back(element);
    ps(nums, output, idx + 1, ans);


}
 
 
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int idx = 0;

        ps(nums, output, idx, ans);
        return ans;

        
    }
};

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution sol; // Class ka object banaya
    vector<vector<int>> ans = sol.subsets(nums); // Function call kiya

    // 2D vector print karna
    for (auto &subset : ans) {
        cout << "[ ";
        for (int val : subset) {
            cout << val << " ";
        }
        cout << "]";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}