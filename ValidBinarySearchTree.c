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
 * @input A : Root pointer of the tree 
 * 
 * @Output Integer
 */
 void isvalid(treenode *root,int *before,int *valid)
{
	if(root==NULL||*valid==0)
		return;
	isvalid(root->left,before,valid);
	if((*before)<root->val)
		*before=root->val;
	else
	{
		*valid=0;
		return;
	}
	isvalid(root->right,before,valid);
}
 
int isValidBST(treenode* A) {
    if(A==NULL)
    return 1;
    int before=INT_MIN,valid=1;
	isvalid(A,&before,&valid);
	return valid;
}
