#include<iostream>
using namespace std;

int main(){
    int chocolates;
    cout<<"enter number of chocolates : ";
    cin>>chocolates;

    int additionalChocolates = chocolates;
    while((additionalChocolates / 3) != 0){
        additionalChocolates = (additionalChocolates / 3) + additionalChocolates;
    }

    cout<<additionalChocolates;
    cout<<"additionalChocolates";
}