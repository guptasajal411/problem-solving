// { Driver Code Starts
#include <iostream>
using namespace std;

// Position this line where user code will be pasted.

int equilibriumPoint(long long a[], int n);

int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        //calling equilibriumPoint() function
        cout << equilibriumPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends

// int sumOfArray(long long a[], int n, int start, int end){
//     int sum = 0;
//     for (int i = start; i < end; i++){
//         sum = sum + a[i];
//     }
//     return sum;
// }
// Function to find equilibrium point
// a: input array
// n: size of array
int equilibriumPoint(long long a[], int n) {
    // Your code here.
    int sum = 0;
    int leftSum = 0;
    for (int i = 0; i < n; i++){
        // if (sumOfArray(a, n, 0, i) == sumOfArray(a, n, i + 1, n)){
        //     return i + 1;
        //     break;
        // }this was bhaang bhosada
        sum = sum + a[i];
    }
    for (int i = 0; i < n; i++){
        sum = sum - a[i];
        if (leftSum == sum){
            return i + 1;
        }
        leftSum = leftSum + a[i];
    }
    return -1;
}