#include<iostream>
#include<string>
using namespace std;

// Checks if a character is alphanumeric
bool valid(char ch){
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')){
        return true;
    }
    return false;
}

// Converts character to lowercase
char toLower(char ch){
    if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')){
        return ch;
    }
    else{
        return ch - 'A' + 'a';
    }
}

// Palindrome check logic
bool isPaline(string a){
    int s = 0;
    int e = a.length() - 1;

    while(s <= e){
        // Fixed: Ensure both sides are lowercase during comparison
        if (toLower(a[s]) != toLower(a[e])){ 
            return false;
        }
        else{
            s++;
            e--;
        }
    }
    return true;
}

int main(){
    string s;
    cout << "Enter text: " << endl;
    getline(cin, s); 

    string temp = "";
    for(int i = 0; i < s.length(); i++){
        if(valid(s[i])){
            temp.push_back(s[i]);
        }
    }
    
    for(int i = 0; i < temp.length(); i++){
        temp[i] = toLower(temp[i]);
    }

    bool check = isPaline(temp);

    // Prints 1 for palindrome, 0 for not
    cout << "Is Palindrome: " << check << endl; 
    
    return 0;
}
