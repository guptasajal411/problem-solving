// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int majorityWins(int arr[], int n, int x,int y);

 // } Driver Code Ends


//User function Template for C++

int majorityWins(int arr[], int n, int x,int y)
{
    // code here
    int countx = 0;
    int county = 0;
    for (int i = 0; i < n; i++){
        if (x == arr[i]){
            countx = countx + 1;
        }
        if (y == arr[i]){
            county = county + 1;
        }
    }
    if (countx > county){
        return x;
    }
    else if (countx < county){
        return y;
    }
    else if (countx == county){
        return min(x, y);
    }
}

// { Driver Code Starts.

int main() {
    
    int t; //Testcases
    cin>>t; // Input the testcases
    while(t--) //Until all testcases are exhausted
    {
        int n; //Size of array
        cin>>n; //Input the size
        int arr[n]; //Declaring array of size n
        for(int i=0;i<n;i++) // Running a loop to input all elements of arr
        cin>>arr[i];
        
        int x,y; //declare x and y
        cin>>x>>y; // input x and y
        cout << majorityWins(arr,n,x,y) << endl; //calling the function that you complete
        
    }
    
	return 0;
}  // } Driver Code Ends