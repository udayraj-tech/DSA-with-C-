#include<iostream>
using namespace std;

// getting the digit wise

int main(){
    int n = 2435;
    int ans = 0;

    while(n != 0){
        ans = n % 10;
        n = n / 10;

        cout << ans << "\n";
    }
        

}