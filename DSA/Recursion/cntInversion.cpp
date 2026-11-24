#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int cntMerge(vector<int> &arr, int s, int e){

    vector<int> temp;
    int res = 0;
    int mid = s + (e-s)/2, i = s, j = mid + 1;
    while(i <= mid && j <= e){
        if(arr[i] < arr[j]){
            temp.push_back(arr[i]);
        }
        else{
            temp.push_back(arr[j]);
            res += (j - i);
        }
    }
    return res;


}

int mergeSort(vector<int> &arr, int s, int e){
    int res = 0;
    if(s >= e){
        return 0;
    }

    int mid = s + (e-s)/2;

    res += mergeSort(arr, s, mid);

    res += mergeSort(arr, mid+1, e);

    res += cntMerge(arr, s, e);

    return res;

}




int main(){
    vector<int> arr = {22,34,21,17,20};
    
    mergeSort(arr, 0, arr.size() - 1);

    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;

}