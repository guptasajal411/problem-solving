#include <iostream>
using namespace std;

int linearSearch (int array[], int n, int key){
    
    for (int i = 0; i < n; i++){
        if (array[i] == key){
            return i;
        }
    }
    return -1; 
}

int binarySearch(int array[], int n, int key){
    int s = 0;
    int e = n;
    while (s <= e){
        int midElementIndex = (s + e) / 2;
        if (array[midElementIndex] > key){
            e = (midElementIndex - 1);
        }
        else if (array[midElementIndex] < key){
            s = (midElementIndex + 1);
        }
        else if (array[midElementIndex] == key){
            return midElementIndex;
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    int key;
    cin >> key;
    int array[n];
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    cout << linearSearch(array, n, key) << endl;
    cout << binarySearch(array, n, key) << endl;

}