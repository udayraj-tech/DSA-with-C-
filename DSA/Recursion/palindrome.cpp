#include<iostream>
using namespace std;


bool palin(string &str, int i, int j){

    if(i > j){
       return true;
    }
    if(str[i] != str[j]){
        return false;
    }
    else{
        return palin(str, i + 1, j - 1);

    }
}

int main(){
    string name = "bookob";

    bool ans = palin(name, 0, name.length() - 1);
    if(ans){
        cout << "Palindrome" << endl;
    }
    else{
        cout << "Not Palindrome" << endl;
    }
}