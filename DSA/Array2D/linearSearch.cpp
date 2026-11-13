#include<iostream>
using namespace std;
bool linearSearch(int arr[][3], int row, int col, int target){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;


}

int main(){
    int arr[3][3] = {{5,6,7},{4,3,2},{8,9,1}};
    int target = 11;
    bool ans = linearSearch(arr, 3, 3, target);
    cout << ans << endl;

}