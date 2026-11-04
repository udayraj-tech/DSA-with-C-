#include<iostream>
using namespace std;

int main(){
    int n = 5;
    for(int i = 0; i <= n - 1; i++){

        for(int k = 1; k <= i; k++){
            cout << " ";
        }
        for(int j = 1; j <= n - i; j++){
            cout << "* ";
        }
        cout << endl;

    }


    for(int i = 2; i <= n; i++){

        for(int k = 1; k <= n - i; k++){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;

    }
}