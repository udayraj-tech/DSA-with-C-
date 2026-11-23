#include<iostream>
#include<vector>

using namespace std;

class Solution {
private:
    void merge(vector<int>& arr, int s, int e) {
        vector<int> temp;
        int mid = s + (e - s)/2;

        int i = s;
        int j = mid + 1;

        while(i <= mid && j <= e){
            if(arr[i] < arr[j]){
                temp.push_back(arr[i]);
                i++;
            }
            else{
                temp.push_back(arr[j]);
                j++;
            }
        }

        // remaining left part
        while(i <= mid){
            temp.push_back(arr[i]);
            i++;

        }

        // remaining right part
        while(j <= e){
            temp.push_back(arr[j]);
            j++;

        }

        for(int idx = 0; idx < temp.size(); idx++){
            arr[idx + s] = temp[idx];

        }
    }

    void mergeSort(vector<int>& arr, int s, int e) {
        
        // base code
        if(s >= e){
            return ;
        }

        int mid = s + (e - s)/2;

        // left half
        mergeSort(arr, s, mid);

        // right half
        mergeSort(arr, mid + 1, e);

        // call merge
        merge(arr, s, e);
    }

public:
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};

int main() {
    Solution obj;
    vector<int> arr = {5, 2, 3, 1};

    vector<int> ans = obj.sortArray(arr);

    for (int x : ans) {
        cout << x << " ";
    }
    return 0;    
}