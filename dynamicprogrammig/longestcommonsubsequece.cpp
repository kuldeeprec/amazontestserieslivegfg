#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int input[])
    {
       // your code here
       int output[n];
       output[0]=1;
       for(int i=1;i<n;i++){
           output[i]=1;
           for(int j=i-1;j>=0;j--){
               if(input[j]>=input[i]){
                   continue;
               }
               int possibleans=output[j]+1;
               if(possibleans>output[i]){
                   output[i]=possibleans;
               }
           }
       }
       return *max_element(output,output+n);
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}
  // } Driver Code Ends