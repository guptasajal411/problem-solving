#include <bits/stdc++.h>

using namespace std;

void answer(int a[], int n){
    int left = 0, right = n - 1;
    while (left <= right){
        if (a[left] > 0 && a[right] < 0){
            int temp = a[left];
            a[left] = a[right];
            a[right] = temp;
            left++;
            right--;
        }
        else if (a[left] > 0 && a[right] > 0){
            right--;
        }
        else if (a[left] < 0 && a[right] > 0){
            left++;
            right--;
        }
        else if(a[left] < 0 && a[right] < 0){
            left++;
        }
    }
}

int main(){
    int arr[] = {-12, 11, -13, -5, 
               6, -7, 5, -3, 11};
    int arr_size = sizeof(arr) / 
                sizeof(arr[0]);
    answer(arr, arr_size);
    for (int i = 0; i < arr_size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}