#include<iostream>
using namespace std;

int main(){

    int row;
    cout << "Enter the row: ";
    cin >> row;

    int col;
    cout << "Enter the col: ";
    cin >> col;

    // creating 2D array
    int** arr = new int*[row];
    for(int i = 0; i < row; i++){
        arr[i] = new int[col];

    }

    // taking input
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
        }

    }
     
    // output
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // releasing the memory
    for (int i = 0; i < row; i++){
        delete [] arr[i];
    }
    
    delete []arr;
}