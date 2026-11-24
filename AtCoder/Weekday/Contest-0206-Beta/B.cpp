#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;

    vector<string> S(N);

    for(int i = 0; i < N; i++){
        cin >> S[i];
        
    }

    int cnt = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){

            if( S[i][j] == '.'){
                cnt++;
            }
        }
    }
    cout << cnt;
}
