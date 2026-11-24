#include <bits/stdc++.h>
using namespace std;

long long cntMerge(vector<int> &arr, int s, int mid, int e) {
    vector<int> temp;
    long long res = 0;
    int i = s, j = mid + 1;

    while (i <= mid && j <= e) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            res += (mid - i + 1); // Left half ke saare bache hue elements bade hain
            j++;
        }
    }

    // Left half ke bache hue elements
    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    // Right half ke bache hue elements
    while (j <= e) {
        temp.push_back(arr[j]);
        j++;
    }

    // temp ko wapas arr mein copy karo
    int k = s;
    for (int idx = 0; idx < temp.size(); idx++) {
        arr[k] = temp[idx];
        k++;
    }

    return res;
}

long long mergeSort(vector<int> &arr, int s, int e) {
    if (s >= e) {
        return 0;
    }

    int mid = s + (e - s) / 2;
    long long res = 0;

    res += mergeSort(arr, s, mid);
    res += mergeSort(arr, mid + 1, e);
    res += cntMerge(arr, s, mid, e);

    return res;
}

int main() {
    vector<int> arr = {22, 34, 21, 17, 20};

    long long totalInv = mergeSort(arr, 0, arr.size() - 1);

    cout << "Inversions: " << totalInv << endl;
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;
}