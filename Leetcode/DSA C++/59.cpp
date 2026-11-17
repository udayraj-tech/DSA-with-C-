#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n));
        int top = 0, bottom = n - 1, left = 0, right = n - 1;
        int idx = 1;

        while(idx <= n * n){
            // top

            for (int i = left; i <= right; i++){
                matrix[top][i] = idx++;
            }
            top++;

            // rightmost

            for(int i = top; i <= bottom; i++){
                matrix[i][right] = idx++;
            }
            right--;

            // bottom
            if(top <= bottom){
                for(int i = right; i >= left; i--){
                    matrix[bottom][i] = idx++;
                }
                bottom--;
            }

            // leftmost

            if(left <= right){
                for(int i = bottom; i >= top; i--){
                    matrix[i][left] = idx++;
                }
                left++;
            }
        }
        return matrix;
        
    }

};

int main() {
    // 1. Solution class ka object bana
    Solution obj;
    
    // 2. Function ko call kar (example: n = 3 ke liye)
    int n = 3;
    vector<vector<int>> result = obj.generateMatrix(n);
    
    // 3. Result ko print karke verify kar
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}