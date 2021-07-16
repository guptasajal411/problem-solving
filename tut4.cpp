#include<iostream>
using namespace std;

int global = 6;

void sum(){
    int a;
    cout<<global<<"\n";
}

int main(){
    // int a = 144;
    // int b = 445;
    int global = 45;
    global = 78;
    int a = 4, b = 5;
    float pi = 3.1415;
    char h = 'u';
    bool loob = true;
    bool loov = false;
    // cout<<"The value of a is "<<a<<".\nThe value of b is "<< b<<".\nThe value of pi is "<<pi;
    // cout<<"\nThe value of character is "<<h;
    sum();
    cout<<global<<"\n"<<loob<<"\n"<<loov;

}