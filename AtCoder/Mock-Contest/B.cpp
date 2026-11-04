#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int n, m;
    cin >>  n >> m;

    vector<string> S(n);

    for (int i = 0; i < n; i++){
        cin >> S[i];
    }

    vector<string> T(m);

    for (int i = 0; i < m; i++){
        cin >> T[i];
    }
    vector<int> vote(n, 0);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (T[i] == S[j]) {
                vote[j]++;
                break;    
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << vote[i] << "\n";
    }
}