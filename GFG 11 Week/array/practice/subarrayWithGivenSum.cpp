// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

#include <list>
// Function to find the subarray with given sum k
// arr: input array
// n: size of array
vector<int> subarraySum(int arr[], int n, int s){
    list <int> l1;
    for (int i = 0; i < n; i++){
        int sum = 0;
        for (int j = i + 1; j < n; j++){
            sum = sum + arr[j];
            if (sum == s){
                l1.push_front(j + 1);
                l1.push_front(i + 1);
                break;
            }
        }
    }
    return l1;
    // Your code here
    
}

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        vector<int>res;
        res = subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends