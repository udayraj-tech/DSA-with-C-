#include<iostream>
#include<string>
#include<array>
using namespace std;

int main(){
    string s1("cb");
    string s2("eidbaooo");

    if(s1.length() > s2.length()){
        return 0;
    }

    std::array<int, 26> s1Count = {0};
    std::array<int, 26> s2Count = {0};

    // count kar rahe hai s1 aur s2 ka element ke loop do baar hi chalega;
    for(size_t i = 0; i < s1.length(); i++){
        s1Count[s1[i] - 'a']++;
        s2Count[s2[i] - 'a']++;
    }

    if (s1Count == s2Count){
        cout << true << endl;
    }
    int windowSize = s1.length();

    for(size_t i = windowSize; i < s2.length(); i++){
        s2Count[s2[i] - 'a']++;
        s2Count[s2[i - windowSize] - 'a']--;

        if (s1Count == s2Count){
        cout << true << endl;
        }
    }
    cout << false << endl;
    
}   