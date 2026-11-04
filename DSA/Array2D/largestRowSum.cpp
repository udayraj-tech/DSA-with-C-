#include<iostream>
using namespace std;
int largestRowSum(int arr[][3], int n, int m){
    int maxi = INT32_MIN;
    int rowIndex = -1;
    for(int i = 0; i < 3; i++){
        int rowSum = 0;
        for (int j = 0; j < 3; j++){
            rowSum = arr[i][j] + rowSum;
        }
        if(rowSum > maxi){
            maxi = rowSum;
            rowIndex = i;
        }
    }
    return rowIndex;
}

int main(){
    int arr[3][3] = {{5,6,7},{4,3,2},{8,9,3}};
    cout << largestRowSum(arr, 3, 3);


}