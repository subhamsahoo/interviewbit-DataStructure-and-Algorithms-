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
 * @input k : Integer
 * 
 * @Return Integer
 */
void traversal(treenode* root,int k,int* pointer,int* num)
 {
     if(root==NULL||k==(*pointer))
     return NULL;
     traversal(root->left,k,pointer,num);
      (*pointer)++;
     if(k==(*pointer))
     {
         (*num)=root->val;
         return;
     }
     traversal(root->right,k,pointer,num);
 }
 
int kthsmallest(treenode* root, int k) {
    int pointer=0,num=5;
    traversal(root,k,&pointer,&num);
    return num;
}