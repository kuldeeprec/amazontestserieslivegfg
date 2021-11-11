#include<bits/stdc++.h>
using namespace std;

int max_sum(int A[],int N);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }

        cout<<max_sum(A,N)<<endl;
        /*keeping track of the total sum of the array*/

    }
}
// } Driver Code Ends


/*You are required to complete this method*/

int max_sum(int arr[],int n)
{
    int cum_sum = 0;
    for (int i=0; i<n; i++)
        cum_sum += arr[i];

    // Compute sum of i*arr[i] for initial
    // configuration.
    int curr_val = 0;
    for (int i=0; i<n; i++)
        curr_val += i*arr[i];

    // Initialize result
    int res = curr_val;

    // Compute values for other iterations
    for (int i=1; i<n; i++)
    {
        // Compute next value using previous 
        // value in O(1) time
        int next_val = curr_val - (cum_sum - arr[i-1])
                       + arr[i-1] * (n-1);

        // Update current value
        curr_val = next_val;

        // Update result if required
        res = max(res, next_val);
    }

    return res;
}