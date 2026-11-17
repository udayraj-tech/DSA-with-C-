#include<iostream>
using namespace std;

void spiralFill(int arr[][3], int arr1[], int row, int col){

    int top = 0, bottom = row - 1, left = 0, right = col - 1;
    int idx = 0;

    while(idx < col * row){
        // top

        for (int i = left; i <= right; i++){
            arr[top][i] = arr1[idx++];
        }
        top++;

        // rightmost

        for(int i = top; i <= bottom; i++){
            arr[i][right] = arr1[idx++];
        }
        right--;

        // bottom
        if(top <= bottom){
            for(int i = right; i >= left; i--){
                arr[bottom][i] = arr1[idx++];
            }
            bottom--;
        }

        // leftmost

        if(left <= right){
            for(int i = bottom; i >= top; i--){
                arr[i][left] = arr1[idx++];
            }
            left++;
        }
    }
}

int main(){

    int arr1[9] = {1,2,3,4,5,6,7,8,9};
    int arr[3][3] = {0};

    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);
    int totalElements = rows * cols;

    spiralFill(arr, arr1, rows,cols);
    for(int i = 0; i < rows; i++ ){
        for(int j = 0; j < cols; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
       
    }
    

}