#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int s, int e){

    int mid = s + (e - s)/2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int mainArrIdx = s;
    for(int i = 0; i < len1; i++){
        first[i] = arr[mainArrIdx++];
    }

    mainArrIdx = mid + 1;
    for(int i = 0; i < len2; i++){
        second[i] = arr[mainArrIdx++];
    }

    // merge two sorted array

    int idx1 = 0;
    int idx2 = 0;
    mainArrIdx = s;

    while(idx1 < len1 && idx2 < len2){
        if(first[idx1] < second[idx2]){
            arr[mainArrIdx++] = first[idx1++];
        }
        else{
            arr[mainArrIdx++] = second[idx2++];
        }
    }

    // remaining left half
    while(idx1 < len1){
        arr[mainArrIdx++] = first[idx1++];
    }

    // remaining right half
    while(idx2 < len2)
    {
        arr[mainArrIdx++] = second[idx2++];
    }

    delete []first;
    delete []second;

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