#include<iostream>
using namespace std;
// decimal no to binary no
int main(){
    int n = 9;
    int ans = 0;
    int mult = 1;
    
    while(n != 0){
        int bit = n & 1;
        cout << bit ; // aise bhi ham kar sakte hai 
        ans = (bit * mult) + ans;
        mult = mult * 10;
        n = n >> 1;
        
    }
    // cout << ans << "\n";  // aise bhi print ho jayega. 
    
}