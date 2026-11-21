#include<iostream>
using namespace std;

void bubbleSort(int *arr, int n){
    // base case
    if (n == 1 || n == 0){
        return  ;
    }
    // ek case solve kar lo - largest wala last mai aa jayega
    for(int i = 0; i < n - 1; i++){
        if(arr[i] > arr[i + 1]){
            swap(arr[i], arr[i+1]);
        }
    }

    return bubbleSort(arr, n - 1);


}

int main(){
    int arr[5] ={5,3,11,15,12};
    int n = 5;

    bubbleSort(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
}