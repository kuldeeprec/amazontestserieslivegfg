#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


class Solution{
  public:
    vector<bool> processQueries(int a[], int n, vector<pair<int, int>> &queries,
                                int q) {
        // code here
        vector<bool>ans;
        int left[n],right[n];
        int lastincr=0;
        left[0]=0;
        for(int i=1;i<n;i++){
            if(a[i]>a[i-1])
                lastincr=i;
            left[i]=lastincr;
        }
        right[n-1]=n-1;
        int firstdecr=n-1;
        for(int i=n-2;i>=0;i--){
            if(a[i]>a[i+1])
                firstdecr=i;
            right[i]=firstdecr;
        }
        for(int i=0;i<q;i++){
            int l,r;
            l=queries[i].first;
            r=queries[i].second;
            if(right[l]>=left[r]){
                ans.push_back(true);
               
            }
            else{
                ans.push_back(false);
               
            }
        }
        return ans;
        
    }
};

// { Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, i, q;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin >> q;
        vector<pair<int, int>> queries(q);
        for (i = 0; i < q; i++) {
            cin >> queries[i].first >> queries[i].second;
        }
        Solution obj;
        auto v = obj.processQueries(a, n, queries, q);
        for (bool u : v) {
            cout << (u ? "Yes\n" : "No\n");
        }
    }
    return 0;
}  // } Driver Code Ends