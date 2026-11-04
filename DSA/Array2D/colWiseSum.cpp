#include<iostream>
using namespace std;
void rowWiseSum(int arr[][3], int n, int m){
    for(int j = 0; j < 3; j++){
        int rowSum = 0;
        for (int i = 0; i < 3; i++){
            rowSum = arr[i][j] + rowSum;
        }
        cout << rowSum << " ";

    }
    cout << endl;

}

int main(){
    int arr[3][3] = {{5,6,7},{4,3,2},{8,9,1}};

    // Taking 2d arraay as input
    // for(int row = 0; row < 3; row++){
    //     for(int col = 0; col < 4; col++){
    //         cin >> arr[row][col];
    //     }
    // }
    rowWiseSum(arr, 3, 3);


}