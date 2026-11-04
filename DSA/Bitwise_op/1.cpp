#include<iostream>
using namespace std;

int main(){
    int an = 5 & 7; // and operator
    int orr = 5 | 7; // or operator 
    int xorr = 5 ^ 7; // xor operator
    int nott = ~5; // not operator

    cout << an << " " << orr << " " << xorr << " " << nott << " " << endl;

    int ans = 3 << 2; // left shift 
    int a = 15 >> 2; // right shift

    cout << ans << " " << a << " " << endl;

}