#include<iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e, int n, int key){
    int mid = s + (e - s)/2;
    // base case
    if(s > e){
        return false;
    }

    if(arr[mid] == key){
        return true;
    }

    if(arr[mid] < key){
        return binarySearch(arr, mid + 1, e, n - 1 - mid, key);
    }
    else{
        return binarySearch(arr, s, mid - 1, n - 1 - mid, key);
    }
    mid = s + (e - s)/2;
}

int main(){
    int arr[5] = {1,4,7,11,12};
    bool ans = binarySearch(arr, 0, 4, 5, 15);

    if(ans){
        cout<< "Present" << endl;
    }
    else{
        cout << "Absent" << endl;
    } 

}