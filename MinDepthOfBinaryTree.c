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
int minDepth(treenode* A) {
    if(A==NULL)
    return 0;
    else if(A->left==NULL&&A->right==NULL)
    return 1;
    else if(A->left!=NULL&&A->right==NULL)
    return 1+minDepth(A->left);
    else if(A->left==NULL&&A->right!=NULL)
    return 1+minDepth(A->right);
    else
    {
        int l=minDepth(A->left);
        int r=minDepth(A->right);
        return 1+((l<r)?l:r);
    }
}
