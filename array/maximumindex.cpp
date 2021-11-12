#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int arr[], int n) 
    { 
        // Your code here
         queue<pair<int , int >> q ;
       q.push({0, n-1}); 
       int ans = -1 ; 
       int flag=0 ; 
       while(!q.empty())
       {
           int t = q.size() ; 
           for(int i =0;i<t; i++)
           {
               auto it = q.front() ; 
               q.pop() ; 
               int x= it.first ; 
               int y= it.second; 
               if(arr[y]>=arr[x]&&y>=x)
               {
                   ans = y- x ; 
                   flag=1 ; 
                   break ; 
               }
               q.push({x+1, y}); 
               q.push({x, y-1}); 
             
           }
             if(flag==1)
               break ; 
       }
       return ans ;
    }
};

// { Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
}   // } Driver Code Ends