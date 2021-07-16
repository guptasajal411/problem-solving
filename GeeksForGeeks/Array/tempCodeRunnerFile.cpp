#include <bits/stdc++.h>

using namespace std;

void moveToZeroIndex(int a[], int n, int k){
    int temp = a[0];
    a[0] = (-1) * k;
    for (int i = k; i > 1; i--){
        a[i] = a[i - 1];
    }
    a[1] = temp;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        if (arr[i] < 0){
            moveToZeroIndex(arr, n, i);
        }
    }
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}