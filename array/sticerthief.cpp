#include <bits/stdc++.h>
using namespace std;
int FindMaxSum(int arr[], int n)
   {
       if(n==0) return 0;
       if(n==1) return arr[0];
       
       int v1 = arr[0];
       int v2 = max(v1, arr[1]);
       
       for(int i=2; i<n; i++){
           int temp = v2;
           v2 = max(v2, v1+arr[i]);
           v1 = temp;
       }
       
       return v2;
   }

  int FindMaxSum(int arr[], int n)
{
        // Your code here
    vector<int> dp(n + 1);
    dp[1] = arr[0];

    for (int i = 2; i <= n; i++)
    {
       dp[i] = max(arr[i - 1] + dp[i - 2], dp[i - 1]);
    }
    return dp[n];
}
typedef long long int ll;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int a[], int n)
    {
        // Your code here
        int added=a[0],notadd=0,newnot=0;
        for(int i=1;i<n;i++){
           newnot=(added>notadd)?added:notadd;
           added= notadd+a[i];
           notadd=newnot;
        }
        return max(notadd,added);
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}
  // } Driver Code Ends