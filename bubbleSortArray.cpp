#include<iostream>
using namespace std;

void bubbleSort(int array[], int n){
    int duplicate[n - 1];
    int originalSize = n;


    while (n == 1){
        for(int i = 0; i < n; i++){
            if (array[i] > array[i + 1]){
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                n = n - 1;
            }
            for(int j = 0; j < n - 1; j++){
                duplicate[j] = array[j];
            }
        }

    }
    for (int k = 0; k < n - 1; k++){
    cout<<duplicate[k]<<endl;
    }

}

int main(){
    int size;
    cout<<"enter size of array : ";
    cin>>size;
    int array1[size];
    for (int i = 0; i < size; i++){
        cout<<"enter value of unsorted array element : ";
        cin>>array1[i];
    }

    bubbleSort(array1, size);
}