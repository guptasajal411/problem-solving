#include <bits/stdc++.h>
using namespace std;

int knapsack(int array[], int n, int k){
    sort(array, array + n);
    int answer = 0;
    for (int i = n - k; i < n; i++){
        answer = answer + array[i];
    }
    return answer;
}

int main(){
    int k = 4;
    
    // cin >> n >> k;
    int array[7] = {20, 70, 100, 30, 200, 40, 10};
    int n = sizeof(array);
    // for (int i = 0; i < n; i++){
    //     cin >> array[i];
    // }
    cout << knapsack(array, n, k);
}