#include<iostream>
using namespace std;

string occurence(string s, string part){
    if (s.find(part) == string::npos){
        return s;
    }
    while(s.length() != 0 && s.find(part) < s.length()){
        s.erase(s.find(part), part.length());
    }
    return s;
}
int main(){

    string ch;
    cout << "Enter: " << endl;
    cin >> ch;
    string part;
    cout << "Enter Part: " << endl;
    cin >> part;

    cout << occurence(ch, part);
    
}