#include<iostream>
using namespace std;

void print(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int  arrSum(int *arr, int n){

    print(arr, n);
    int sum = 0;
    // base case
    if (n == 0){
        return 0;
    }
    sum = sum + arr[0];

    return sum + arrSum(arr + 1, n - 1);
    
}

int main(){
    int arr[5] = {1,4,7,11,12};
    cout << "The sum is: " << arrSum(arr, 5);

}