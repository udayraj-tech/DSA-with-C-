#include<iostream>
using namespace std;

int pagePrint(int n){
  int ans = 0;
  if(n==1){
    return 1;
  }
  
  if(n%2 == 0){
    ans = n/2;
  }
  else{
    ans = (n/2) + 1;
  }
  return ans;
}

int main(){
  
  int n = 59;
  cout << pagePrint(n);
}