#include<iostream>
using namespace std;

void reverseString(char s[], int n) {
    int start = 0;
    int end = n - 1;

    while(start < end){
        swap(s[start++], s[end--]);
    }
    
}

int main() {
    char arr[5] = {'h', 'e', 'l', 'l', 'o'};
    reverseString(arr, 5);
    
    // Print the reversed array
    for (int i = 0; i < 5; i++) {
        cout << arr[i];
    }
    cout << endl;
    
    return 0;
}