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
 * @input root : Root pointer of the tree 
 * 
 * @Output root pointer of tree.
 */
treenode* invertTree(treenode* root) {
    if(root==NULL)
    return;
    treenode* temp=root->left;
    root->left=root->right;
    root->right=temp;
    invertTree(root->left);
    invertTree(root->right);
    return root;
}