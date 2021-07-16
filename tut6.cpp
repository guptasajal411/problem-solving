#include<iostream>

// There are two types of header files:
// 1. System header files: It comes with the compiler
#include<iostream>
// 2. User defined header files: It is written by the programmer
// #include "this.h" //--> This will produce an error if this.h is no present in the current directory


using namespace std;

int main(){
    int india = 100;
    int a = 4, b = 5; 
    cout<<"Operators in C++"<<endl;
    cout<<"Operators in C++"<<endl;
    /*arithmatic ioerator*/
    cout << "The value of a + b is " << a + b<<"\n";       
    cout << "The value of a - b is " << a - b<<"\n";       
    cout << "The value of a * b is " << a * b<<"\n";       
    cout << "The value of a / b is " << a / b<<"\n";                            
    cout << "The value of a % b is " << a % b<<"\n";                            
    cout << "The value of india ++ is " << india++ << "\n";                            
    cout << "The value of india-- is " << india-- << "\n";                            
    cout << "The value of ++india is " << ++india << "\n";                            
    cout << "The value of --india is " << --india << "\n";     
    cout << india;
    return 0;

}