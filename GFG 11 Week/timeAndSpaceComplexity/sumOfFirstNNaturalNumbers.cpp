#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<(n * (n + 1)) / 2;
    int counter = 0;
    for (int i = 0; i < n; i++){
        counter = counter + n + 1;
    }
    cout<<counter;
}