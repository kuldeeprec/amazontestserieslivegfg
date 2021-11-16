//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

 // } Driver Code Ends


/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
int search(int *in ,int x,int n){
    for(int i=0;i<n;i++){
        if(in[i]==x){
            return i;
        }
    }
    return -1;
}
class Solution{
    public:
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        if(n==0){
            return NULL;
        }
        int root=search(in,pre[0],n);
        Node *temp=new Node(pre[0]);
        temp->left=buildTree(in,pre+1,root);
        temp->right=buildTree(in+root+1,pre+root+1,n-root-1);
        return temp;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}
  // } Driver Code Ends