#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        bool swapped = false;
        
        cout << endl;
        cout << "Round: " << i + 1 << endl;
        
        for(int j = 0; j < n - 1; j++){
            printArray(arr, 5);
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if (swapped == false){break;}
    }
}



int main(){
    int arr[5] = {65,25,22,12,11};
    cout << "Before sorting : ";
    printArray(arr, 5);

    cout << "After Sorting : ";
    bubbleSort(arr, 5);
    printArray(arr, 5);
}