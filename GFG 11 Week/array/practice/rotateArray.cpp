#include <iostream>
using namespace std;

int main(){
    int n, d;
    cin >> n >> d;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    // ```````````````using temp array`````````````
    int temp[d];
    for (int i = 0; i < d; i++){
        temp[i] = arr[i];
    }
    for (int i = d; i < n; i++){
        arr[d - 3] = arr[d];
    }
    // for (int i = 0; i < d; i++){
    //     arr[n - d + i - 1] = temp[i];
    // }
    // ```````````one by one rotation```````````````
    // for (int i = 0; i < d; i++){
    //     int temp = arr[0];
    //     for (int i = 1; i < n; i++){
    //         arr[i - 1] = arr[i];
    //     }
    //     arr[n - 1] = temp;
    // }
    for(int i = 0; i < d; i++){
        cout << temp[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}