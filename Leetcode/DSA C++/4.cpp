#include<iostream>
#include<vector>
using namespace std;

class Solution {

public:

double merge(vector<int>& nums1, vector<int>& nums2){

    int len1 = nums1.size();
    int len2 = nums2.size();

    vector<int> temp; 
    // merge two sorted array

    int idx1 = 0;
    int idx2 = 0;

    while(idx1 < len1 && idx2 < len2){
        if(nums1[idx1] < nums2[idx2]){
            temp.push_back(nums1[idx1]);
            idx1++;
        }
        else{
            temp.push_back(nums2[idx2]);
            idx2++;
        }
    }

    while(idx1 < len1){
        temp.push_back(nums1[idx1]);
        idx1++;
    }
    
    while(idx2 < len2){
        temp.push_back(nums2[idx2]);
        idx2++;
    }


    // find the median
    int s = 0;
    int e = temp.size() - 1;
    int mid = s + (e-s)/2;

    if(temp.size() % 2 == 0){
        return (temp[mid] + temp[mid + 1]) / 2.0;
    }
    else{
        return temp[mid] ;
    }

}


};
int main() {

    Solution obj;

    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};

    double ans = obj.merge(nums1, nums2);
    cout << ans;

}