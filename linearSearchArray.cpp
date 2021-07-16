#include<iostream>
using namespace std;

int linearSearch(int array[], int n, int key){
    int hi = 0;
    for (int i = 0; i < n; i++){
        if (key == array[i]){
            // cout<<"Key found at index : "<<i<<endl;
            return i;
            hi = 1;
        }
    }
    if (hi == 0){
        // cout<<"Key not found in the array";
        return -1;
    }
    return 0;
}

int main(){
    int size;
    int key;
    cout<<"enter sixe of array : ";
    cin>>size;
    cout<<"key : ";
    cin>>key;
    int array1[size];
    cout<<"Enter array values : ";
    
    for (int i = 0; i < size; i++){
        cin>>array1[i];
    }
    cout<<linearSearch(array1, size, key);
    return 0;
}