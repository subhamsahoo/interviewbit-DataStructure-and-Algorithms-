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
 * @input B : Integer
 * 
 * @Output Integer
 */
void path(treenode *root,int sum,int prev,int* found)
{
    if(root==NULL||(*found)==1)
    return;
    int current=prev+(root->val);
    if(root->left==NULL&&root->right==NULL)
    {
        if(current==sum)
        {
            *found=1;
            return;
        }
    }
    path(root->left,sum,current,found);
    path(root->right,sum,current,found);
}
 
 
int hasPathSum(treenode* A, int B) {
    int found=0,prev=0;
    path(A,B,prev,&found);
    return found;
}