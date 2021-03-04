#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void checkerFunction(char s[]){
    for(int i=0;i<strlen(s);i++){
        if (i%2 == 0){
            cout << s[i];
        }
    }
    cout << " ";
    for(int i=0;i<strlen(s);i++){
        if (i%2 != 0){
            cout << s[i];
        }
    } 
    cout << endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n; char s[10000];
    cin >> n;
    for(int i=0;i<n;i++){
       cin >> s;
       checkerFunction(s);
   }
}