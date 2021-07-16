#include <iostream>
using namespace std;

int answer(int array[], int n, int s, int e){
    int midIndex = (s + e) / 2;
    while (s <= e){
        if (1 == array[midIndex]){
            return midIndex;
        }
        else if(1 > array[midIndex]){
            s = midIndex + 1;
        }
        else if(1 < array[midIndex]){
            e = midIndex - 1;
        } 
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    cout << answer(array, n, 0, n - 1);
}