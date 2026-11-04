#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
   
    string row1, row2;
    cin >> row1 >> row2;

    if ((row1[0] == 'A' && row2[1] == 'D') || (row1[0] == 'D' && row2[1] == 'A')) {
        cout << "No" << endl;
    }
    else if ((row1[1] == 'A' && row2[0] == 'D') || (row1[1] == 'D' && row2[0] == 'A')) {
        cout << "No" << endl;
    }

    else {
        cout << "Yes" << endl;
    }

    return 0;
}
