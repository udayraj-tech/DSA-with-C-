#include<iostream>
using namespace std;

bool isPaline(char arr[], int n){
    int s = 0;
    int e = n - 1;

    while(s <= e){
        if (arr[s] != arr[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }

    }
    return 1;

}
int main() {
    char arr[5] = {'a','c','d','b','a'};
    cout << isPaline(arr, 5) << endl;
    
    return 0;
}