#include<iostream>
#include<vector>
#include<string>
using namespace std;

void clogged(vector<string> &S, int N, int M) {
    // 1. Check if any Row (Faucet) is completely 'x'
    for (int i = 0; i < N; i++) {
        bool all_x = true;
        for (int j = 0; j < M; j++) {
            if (S[i][j] == 'o') {
                all_x = false;
                break;
            }
        }
        if (all_x) {
            cout << "Faucet " << i + 1 << "\n";
            return ;
        }
    }

    // 2. Check if any Column (Drain) is completely 'x'
    for (int j = 0; j < M; j++) {
        bool all_x = true;
        for (int i = 0; i < N; i++) {
            if (S[i][j] == 'o') {
                all_x = false;
                break;
            }
        }
        if (all_x) {
            cout << "Drain " << j + 1 << "\n";
            return ;
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