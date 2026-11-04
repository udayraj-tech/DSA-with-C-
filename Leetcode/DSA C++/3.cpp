#include<iostream>
#include<string>
using namespace std;
string longSubString(string s){
    int right = 0;
    int left = 0;
    int maxLength = 0;
    int count[256] = {0};

    while(right < s.size()){
        count[s[right]]++;

       if (count[s[right]] > 1)
        {
            count[s[left]]--;
            left++;
        }
        int len = right - left + 1;
        if (len > maxLength){
            maxLength = len;

        }
        right++;
        

    }
    cout << "Maximum length: " << maxLength;
     
}

int main(){
    string s = "abcabcbb";
    

    longSubString(s);

    return 0;


}