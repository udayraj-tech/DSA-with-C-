#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define endl '\n' // endl se fast hota hai kyunki flush nahi karta

int partition(vector<int> &arr, int s, int e){
    int pivot = arr[e];
    int idx = s-1; 
    for(int j = s; j < e; j++){
        if(arr[j] <= pivot){
            idx++;
            swap(arr[j],arr[idx]);
        }

    }
    idx++;
    swap(arr[e],arr[idx]);
    return idx;
}

void quickSort(vector<int> &arr, int s, int e){
    
    // base case
    if(s >= e){
        return ;
    }

    int p = partition(arr, s, e);

    // left side ko sort karna hai 
    quickSort(arr, s, p - 1);

    // right side ko sort karna hai
    quickSort(arr, p + 1, e);

}



void solve() {
    int N;
    cin >> N;
    vector<int> arr(N);

    for (int i = 0; i < N; i++){
        cin >> arr[i];
    }

    quickSort(arr, 0 , arr.size() - 1);

    for(int val : arr){
        cout << val << " ";
    }cout << endl;
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t; // Agar question mein sirf 1 test case ho, toh is line ko comment kar do
    while (t--) {
        solve();
    }
    return 0;
}