#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int s, int e){
    vector<int> temp;
    int mid = s + (e - s)/2;
    
    int i = s;
    int j = mid + 1;

    while(i <= mid && j <= e){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j <= e){
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx = 0; idx < temp.size(); idx++){
        arr[idx + s] = temp[idx];
    }

}

void mergeSort(vector<int> &arr, int s, int e){
    
    // base case
    if (s >= e){
        return ;
    }

    int mid = s + (e - s)/2;

    // left part sort
    mergeSort(arr, s, mid);

    // right part sort 
    mergeSort(arr, mid + 1, e);

    // merge the array
    merge(arr, s, e);

}

int main(){
    vector<int> arr = {22,34,21,17,20};
    
    mergeSort(arr, 0, arr.size() - 1);

    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;

}