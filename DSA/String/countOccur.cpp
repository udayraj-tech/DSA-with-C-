#include<iostream>
using namespace std;

int main(){
    string s1;
    cin >> s1;

    int s1Count[26] = {0};
    for (int i = 0; i < s1.length(); i++){
        int index = s1[i] - 'a';
        s1Count[index]++;
    }

    for(int i = 0; i < 26; i++){
        cout << s1Count[i] << " ";
    }
    cout << endl;

    
}