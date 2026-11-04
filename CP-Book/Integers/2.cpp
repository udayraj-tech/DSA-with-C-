/*
Here we talk about the Properties of remainder using modulo operators.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 10;
    long long ans = 1;
    int m = 1000000007;
    for (int i = 1; i <= n; i++){
        ans  = (ans * i)% m;
    }
    cout << ans % m << endl;
}