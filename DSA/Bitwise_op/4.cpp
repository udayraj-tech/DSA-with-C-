#include<iostream>
using namespace std;

// binary to decimal

int main(){
    int ans = 0;
    int n = 1101;
    int mult = 1;
    while(n != 0){
        int bit = n % 10;
        if(bit == 1){
            ans = (bit * mult) + ans;
        }
        mult =  mult * 2;
        n = n/10;
    }  
    cout << ans << endl;  
}