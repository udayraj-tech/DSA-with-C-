#include<iostream>
using namespace std;

int main(){
    int n = 5;

    for(int i = 1; i <= n; i++){
        for(int k = 1; k <= i; k++){
            cout << "*";
        }
        
        cout << endl;

    }

    for(int j = 1; j <= n - 1; j++){
        for(int l = 1; l <= n-j; l++){
            cout << "*";
        }
        
        cout << endl;

    }
    
}