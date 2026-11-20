#include<iostream>
using namespace std;

bool isPresent(int *arr, int n, int key){

    if(n == 0){
        return false;
    }
    if(key ==  arr[0]){
        return true;
    }
    else{
        bool remainingPart = isPresent(arr + 1, n - 1, key);
        return remainingPart; 
    }
    return false;
}

int main(){
    int arr[5] = {1,4,7,11,12};
    bool ans = isPresent(arr, 5, 15);

    if(ans){
        cout<< "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }  
} 