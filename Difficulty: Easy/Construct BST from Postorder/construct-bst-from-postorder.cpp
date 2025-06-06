//{ Driver Code Starts
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

Node *constructTree (int [], int );

void printInorder (Node* node)
{
	if (node == NULL)
		return;
	printInorder(node->left);
	printf("%d ", node->data);
	printInorder(node->right);
	

}

int main ()
{   
    int t,n;
   scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int post[n];
        for(int i=0;i<n;i++)
        scanf("%d",&post[i]);

    Node* root = constructTree(post, n);

	printInorder(root);
    printf("\n");

cout << "~" << "\n";
}
	return 0;
}

// } Driver Code Ends


/*struct Node
{
	int data;
	Node *left, *right;
};*/
Node* BST(int post[],int &index,int upper,int lower){
        if(index == -1 || post[index]<lower || post[index]>upper){
            return NULL;
        } 

        Node* root = new Node(post[index--]);
        root->right = BST(post,index,upper , root->data);
        root->left = BST(post,index,root->data,lower);
        return root;
    }

Node *constructTree (int post[], int size)
{
        int index = size-1;
        int upper = INT_MAX;
        int lower = INT_MIN;
        return BST(post,index,upper,lower);
}