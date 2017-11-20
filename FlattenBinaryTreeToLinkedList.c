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
 * @Output root pointer of tree.
 */
treenode* flat(treenode* A,treenode** prev) {
    if(A==NULL)
    return NULL;
    treenode *left1,*right1;
    left1=A->left;
    right1=A->right;
    A->left=NULL;
    A->right=left1;
    *prev=A;
    flat(left1,prev);
    if(right1!=NULL)
    {
        (*prev)->right=right1;
    }
    flat(right1,prev);
    return A;
}

treenode* flatten(treenode* A) {
    treenode* prev=A;
    treenode* res=flat(A,&prev);
    return res;
}