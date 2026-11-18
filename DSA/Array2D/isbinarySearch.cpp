#include<iostream>
using namespace std;
bool binarySearch(int arr[][3], int row, int col, int target){
    int start = 0;
    int end = (row * col) - 1;

    while(start <= end){
        int mid = start + (end - start)/2;
        int element = arr[mid / col][mid % col];

        if(element == target){
            return true;
        }
        if(element < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }    
        mid = start + (end - start)/2;
    }
    return false;

}

int main(){
    int arr[3][3] = {13,22,35,42,55,61,73,88,91};
    bool res = binarySearch(arr, 3, 3, 12);

    cout << res << endl;
}