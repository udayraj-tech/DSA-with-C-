#include<iostream>
#include <utility>

using namespace std;
pair<int, int> binarySearch2D(int arr[][3], int row, int col, int target){
    int start = 0;
    int end = (row * col) - 1;

    while(start <= end){
        int mid = start + (end - start)/2;
        int row_idx = mid / col; 
        int col_idx = mid % col;

        int element = arr[row_idx][col_idx];

        if(element == target){
            return {row_idx,col_idx};
        }
        if(element < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }    
        mid = start + (end - start)/2;
    }
    return {-1,-1};

}

int main(){
    int arr[3][3] = {13,22,35,42,55,61,73,88,91};
    pair<int, int> res = binarySearch2D(arr, 3, 3, 42);

    cout <<"Row: " << res.first << endl << "Col: " << res.second << endl;
}