#include<iostream>
using namespace std;
int linearSearching(int arr[], int n, int key){
    int idx = -1;
    for(int i = 0; i < n; i++){
        if (arr[i] == key){
            idx = i;
        }
    }
    return idx;
}

int main(){
    int arr[5] = {1,5,71,34,4};
    int idx = linearSearching(arr, 5 , 1);
    cout << idx << endl;

}