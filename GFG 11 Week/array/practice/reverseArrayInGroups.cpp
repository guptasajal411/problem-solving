#include <iostream>
using namespace std;
void reverseInGroups(int arr[], int n, int k){
    // code here
    for (int i = 0; i < n; i = i + k){
        int left = i;
        int right = min(i + k - 1, n - 1);
        while (left < right){
            swap(arr[left], arr[right]);
            left = left + 1;
            right = right - 1;
        }
    }
}
int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    reverseInGroups(arr, n, k);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}