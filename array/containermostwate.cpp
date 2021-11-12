//Initial template for C++

#include<iostream>
using namespace std;
int maxArea(int A[], int len);

 // } Driver Code Ends
//User function template for C++

long long maxArea(long long arr[], int len)
{
    // Your code goes here
    int i=0,j=len-1;
    long long int ans =0,maxsum=0;
    while(i<=j){
        if(arr[i]<arr[j]){
            ans=arr[i]*(j-i);
            i++;
        }
        else{
            ans=arr[j]*(j-i);
            j--;
        }
        maxsum=max(ans,maxsum);
    }
    return maxsum;
}

// { Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}
  // } Driver Code Ends