#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr, int s, int e){
    int pivot = arr[s];

    int cnt = 0;
    for(int i = s + 1; i <= e; i++){
        if(arr[i] <= pivot){
            cnt++;
        }
    }

    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    int i = s;
    int j = e;

    while(i < pivotIndex && j > pivotIndex){
        
        while(i < pivotIndex && arr[i] <= pivot){
            i++;
        }

        while(j > pivotIndex && arr[j] > pivot){
            j--;
        }

        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;

}

void quickSort(vector<int> &arr, int s, int e){
    
    // base case
    if(s >= e){
        return ;
    }

    int p = partition(arr, s, e);

    // left side ko sort karna hai 
    quickSort(arr, s, p - 1);

    // right side ko sort karna hai
    quickSort(arr, p + 1, e);

}

int main(){
    vector<int> arr = {22,34,21,17,20};
    
    quickSort(arr, 0, arr.size() - 1);

    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;

}