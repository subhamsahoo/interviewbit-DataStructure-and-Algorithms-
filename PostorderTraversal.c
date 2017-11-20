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
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
int *result,i; 
 void print(treenode* root)
{
	if(root==NULL)
		return;
	print(root->left);
	print(root->right);
		result[i++]=root->val;
}
int* postorderTraversal(treenode* A, int *len1) {
    i=0;
    result=(int*)malloc(sizeof(int)*3000000);
    print(A);
    *len1=i;
    return result;
    
}
