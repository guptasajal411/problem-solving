#include <iostream>
using namespace std;

// iterative function
int iterativeBinarySearch(int array[], int n, int key, int s, int e){
    int mid = (s + e) / 2;
    while (s <= e){
        if (array[mid] == key){
            return mid;
        }
        else if (key < array[mid]){
            e = mid - 1;
        }
        else if(key > array[mid]){
            s = mid + 1;
        }
    }
    return -1;
}

// recursive function

int recursiveBinarySearch(int array[], int n, int key, int s, int e){
    int mid = (s + e) / 2;
    if (key == array[mid]){
        return mid;
    }
    else if (key < array[mid]){
        e = array[mid];
        return recursiveBinarySearch(array, n, key, s, e);
    }
    else if (key > array[mid]){
        s = array[mid];
        return recursiveBinarySearch(array, n, key, s, e);
    }
    return -1;
}

int main(){
    int n, k;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    cin >> k;
    // int s = 0;
    // int e = n;
    // cout << recursiveBinarySearch(array, n, k, 0, n) << endl;
    cout << iterativeBinarySearch(array, n, k, 0, n) << endl;
}