#include<iostream>
using namespace std;

int main(){
    // Swap adjacent elements if they are in wrong order
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }

    int index = 0;
    while (index < n){
        for (int i = 0; i < (n - (1 + index)); i++){
            if (array[i] > array[i + 1]){
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
        index = index + 1;
    }

    for (int i = 0; i < n; i++){
        cout << array[i] << " ";
    }

    return 0;

}