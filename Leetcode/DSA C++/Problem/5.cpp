#include<iostream>
using namespace std;
int expand(string& s, int left, int right) {
    while (left >= 0 && right < s.length() && s[left] == s[right]) {
        left--;
        right++;
    }
    return right - left - 1; 
}

int main(){
    string s = "babad";
    int n = s.size();
    int count = 0;
    

    for (int i = 0; i < n; i++){
        int len1 = expand(s, i, i); // odd ke liye hai 
        int len2 = expand(s, i, i+1); // even ke liye hai
        int len = max(len1, len2);
        
    }
    return 0;
    
}