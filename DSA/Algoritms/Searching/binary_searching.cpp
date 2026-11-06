#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int s = 0;
    int e = n - 1;

    
    while (s < e)
    {
        int mid = s + (e - s)/2;
        if(arr[mid] == key){
            return mid;
        }

        if(key > arr[mid]){
            s = mid + 1;
        }
        e = mid - 1;
        mid = s + (e - s)/2;

    }

    
}

int main(){
    int arr[5] = {3,5,7,8,9};
    int res = binarySearch(arr, 5, 3);
    cout << res << endl;

}