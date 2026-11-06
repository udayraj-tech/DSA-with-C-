#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> &arr) {
    for (int &val : arr) {
        cout << val << " ";
    }
    cout << endl;
}

void selectionSort(vector<int> arr, int n){
    for(int i = 0; i < n - 1; i++ ){
        int min = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[i],arr[min]);
    }
}
int main(){
    vector<int> arr = {64,25,22,12,11};
    cout << "Before Sorting : ";
    printArray(arr);

    cout << "After Sorting : ";
    selectionSort(arr , 5);
    printArray(arr);

}