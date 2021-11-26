#include<bits/stdc++.h>
using namespace std;
long long maxSubarraySum(int arr[],int n){
    long long int current=arr[0],maxsum=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<current+arr[i]){
           current+=arr[i];
        }
        else{
            current = arr[i];
        }
        if(maxsum<current){
            maxsum=current;
        }
    }
    return maxsum;
}

 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
    long long max_so_far = arr[0];
	long long  max_ending_here = arr[0];

	for (int i = 1; i < n; i++)
	{
    	if(arr[i] < (max_ending_here + arr[i]))
    	{
   		 max_ending_here = max_ending_here + arr[i];
    	}
    	else
    	{
        	max_ending_here = arr[i];
    	}
    	if(max_so_far < max_ending_here)
    	{
   		 max_so_far = max_ending_here;
    	}
	}
	return max_so_far;
        
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends