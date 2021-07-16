#include <iostream>
using namespace std;
int* leaders(int a[], int n){
    // code here
    static int count = 0;
    static int answers[100];
    
    for (int i = 0; i < n; i++){
        int j = i + 1;
        for (int j; j < n; j++){
            if (a[i] < a[j]){
                break;
            }
        }
        if ((n - 1 - i) == j){
            a[count] = a[i];
            count = count + 1;
        }
    }
    return a;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    leaders(arr, n);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}