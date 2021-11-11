//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& arr, int n) {
       
        //code here  
        vector<long long int> v;
       long long int pwt0 = 1; //product without 0
       long long int pw0 = 1; //product with 0
       int zeroCount = 0;
       for(int i=0;i<arr.size();i++){
           pw0 *= arr[i];
           if(!arr[i]){
               zeroCount++;
           }else{
               pwt0 *= arr[i];
           }
       }
       for(int i=0;i<arr.size();i++){
           if(!arr[i]){
               v.push_back(zeroCount>1 ? 0 : pwt0);
           }else{
               v.push_back(pw0/arr[i]);
           }
       }
       return v;
    }
    
};


// { Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends