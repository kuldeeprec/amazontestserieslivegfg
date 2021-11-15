//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here 
        if(size==1){
            return a[0];
        }
        int count=0;
        int temp=0;
        int major= size/2;
        for(int i=0;i<size;i++){
            if(count==0){
                temp=a[i];
            }
            if(temp==a[i]){
                count++;
            }
            else{
                count--;
            }
        }
        for(int i=0;i<size;i++){
            if(a[i]==temp){
                count++;
            }
        }
        if(count>major){
            return temp;
        }
        else{
            return -1;
        }
        
    }
};

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends