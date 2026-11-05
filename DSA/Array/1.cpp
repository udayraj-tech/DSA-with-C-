#include<iostream>
using namespace std;

// array ko print karne ka logic
void print(int arr[], int n){
    for(int i = 0; i <= n - 1; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

// getting max value from array
int getMax(int arr[], int n){
    int max = INT16_MIN;

    for(int i = 0; i <= n - 1; i++){
        if(arr[i] > max ){
            max =  arr[i];
        }
    }
    return max;
}

// getting the min value from the array
int getMin(int arr[], int n){
    int min = INT32_MAX;
    for (int i = 0; i < n; i++){
        if(arr[i] < min ){
            min = arr[i];
        }
        
    }
    return min;
}

int main(){
    int arr[5] = {1,5,71,34,4};
    int max = getMax(arr, 5);
    cout << max << endl;

    int min = getMin(arr, 5);
    cout << min << endl;
    
    
}