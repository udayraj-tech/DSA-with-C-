#include<iostream>
using namespace std;


void reverseStr(string &str, int i){
    int j = str.length() - 1 - i;
    if(i > j){
        return ;
    }

    swap(str[i], str[j]);
    i++;
    j--;

    return reverseStr(str, i);
}

int main(){
    string name = "abcde";

    reverseStr(name, 0);
    cout << name << endl;
}