#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int circularSubarraySum(int arr[], int n){
        
        // your code here
          int k=kadane(arr,n);
       if(k<0){
           return k; 
       }
       int mk=0;
       for(int i=0;i<n;i++){
           mk+=arr[i];
           arr[i]=-1*arr[i];        
           
       }
       
       mk=mk+kadane(arr,n);
       return max(mk,k);
   }
   int kadane(int arr[],int n){
       int ans=INT_MIN;int temp=0;
       for(int i=0;i<n;i++){
           temp+=arr[i];
           ans=max(ans,temp);
           if(temp<0){
               temp=0;
           }
           
       }
       return ans;
   }
    
};

// { Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends