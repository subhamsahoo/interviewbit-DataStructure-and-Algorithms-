/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 * 
 * typedef struct TreeNode treenode;
 * 
 * treenode* treenode_new(int val) {
 *     treenode* node = (treenode *) malloc(sizeof(treenode));
 *     node->val = val;
 *     node->left = NULL;
 *     node->right = NULL;
 *     return node;
 * }
 */
/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output root pointer of tree.
 */
 treenode* create(int num)
{
	treenode* newnode=(treenode*)malloc(sizeof(treenode));
	newnode->val=num;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}

 
 void insertion(treenode** root,int num)
{
	if((*root)==NULL)
	{
		treenode *newnode=create(num);
		*root=newnode;
		return;
	}
	else if(num<(*root)->val)
	{
		insertion(&((*root)->left),num);
	}
	else
		insertion(&((*root)->right),num);
}


void bs(const int *arr,int l,int r,treenode** root)
{
	if(l<=r)
	{
		int mid=l+(r-l)/2;
		insertion(root,arr[mid]);
		bs(arr,l,mid-1,root);
		bs(arr,mid+1,r,root);
	}
}
treenode* sortedArrayToBST(const int* A, int n1) {
    treenode* root=NULL;
    bs(A,0,n1-1,&root);
    return root;
}
