#include<iostream>
using namespace std;

char toLower(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

int main(){
    char ch;
    cout <<"Enter the character: ";
    cin >> ch;

    cout << toLower(ch) << endl;
    return 0;
}