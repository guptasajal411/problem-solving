#include <iostream>
using namespace std;

void removeDuplicate(int array[], int n){
    int temp[5000];
    int index = 0;
    for (int i = 0; i < n - 1; i++){
        if (array[i] != array[i + 1]){
            temp[index] = array[i];
            // index = index + 1;
            // n = n - 1;
        }
    }
    for (int i = 0; i < sizeof(temp); i++){
        cout << temp[i] << " ";
    }
    // return array;
}
int main(){
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    removeDuplicate(array, n);
}
