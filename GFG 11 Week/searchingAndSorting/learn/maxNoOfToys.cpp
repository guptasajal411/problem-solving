#include <bits/stdc++.h>
using namespace std;

int answer(int array[], int n, int k){
    sort(array, array + n);
    int i = 0;
    int price = 0;
    for (i = 0; i < n; i++){
        if (price >= 50){
            break;
        }
        price = price + array[i];
    }
    return i;
}


int main(){
    int n, k;
    cin >> n >> k;
    int array[n];
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    cout << answer(array, n, k);
}