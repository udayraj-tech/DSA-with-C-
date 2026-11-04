#include<iostream>
using namespace std;

int main(){
    int n = 4;
    for(int i = 0; i < n; i++){

        // space
        for(int k = 0; k < n - i; k++){
            cout << " ";
        }
        // star
        for(int j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }


}