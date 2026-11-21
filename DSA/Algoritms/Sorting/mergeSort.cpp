#include<iostream>
using namespace std;

void mergeSort(int *arr, int s, int e){

    int mid = s + (e - s)/2;

    // base case
    if (s >= e){
        return ;
    }

    // left part sort
    mergeSort(arr, s, mid);

    // right part sort 
    mergeSort(arr, mid + 1, e);

}

int main(){

}