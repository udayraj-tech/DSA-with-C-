#include<iostream>
#include<string>
#include<vector>

using namespace std;

void clogged(vector<string> &S, int N, int M){
    // pahle ham row ko check karenge
    for(int i = 0; i < N; i++){
        bool all_x = true;
        for(int j = 0; j < M; j++){
            if(S[i][j] == 'o'){
                all_x = false;
                break;
            }
        }
        if(all_x){
            cout << "Faucet " << i + 1 << "\n";
            return;
        }
    }


    for(int i = 0; i < M; i++){
        bool all_x = true;
        for(int j = 0; j < N; j++){
            if(S[j][i] == 'o'){
                all_x = false;
                break;
                
            }
        }
        if(all_x){
            cout << "Drain " << i + 1 << "\n";
            return;
           
        }
    }
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;

    cin >> N >> M;
    vector<string> S(N);

    for(int i = 0; i<N; i++){
        cin >> S[i];
    }

    clogged(S, N, M);

}
