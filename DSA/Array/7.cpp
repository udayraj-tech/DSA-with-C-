#include<iostream>
using namespace std;

// reversing the array 
int main (){
    int arr[4] = {1,2,3,4};

    cout << "Before the swaping" << endl;
    for(int i = 0; i < 4; i++){
        cout << arr[i]<< " ";
    }
    cout << endl;
    
    int l = 0;
    int r = 3;

    while(l < r){
        swap(arr[l++],arr[r--]); 
    }
    cout << "After the swaping" << endl;

    for(int i = 0; i < 4; i++){
        cout << arr[i]<< " ";
    }
}