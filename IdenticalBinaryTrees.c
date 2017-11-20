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
 * @input B : Root pointer of the tree 
 * 
 * @Output Integer
 */
void isvalid(treenode* root1,treenode* root2,int *valid)
 {
     if(root1==NULL&&root2==NULL||(*valid)==0)
     return;
     if(root1==NULL&&root2!=NULL||root1!=NULL&&root2==NULL)
     {
         *valid=0;
         return;
     }
    isvalid(root1->left,root2->left,valid);
    if(root1->val!=root2->val)
    {
        *valid=0;
        return;
    }
    isvalid(root1->right,root2->right,valid);
 }
 
int isSameTree(treenode* A, treenode* B) {
    int valid=1;
    isvalid(A,B,&valid);
    return valid;
}