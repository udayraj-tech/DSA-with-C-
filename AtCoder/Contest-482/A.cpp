#include<iostream>
#include<string>
#include<vector>

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string S;
    cin >> S;
    
    int count = 0;
    for (int i = 0; i < S.length(); i++){
        if (S[i] == 'o'){
            count += 1;
        }
    }
    if (count % 2 == 0 || count == 0 ){
        cout << "even";
    }
    else{
        cout << "odd";
    }
}