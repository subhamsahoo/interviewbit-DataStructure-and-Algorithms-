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
 * @Output root pointer of tree.
 */
treenode* Find(treenode* root, int data) {
	if(root == NULL) return NULL;
	else if(root->val == data) return root;
	else if(root->val < data) return Find(root->right,data);
	else return Find(root->left,data);
}

//Function to find Node with minimum value in a BST
treenode* FindMin(treenode* root) {
	if(root == NULL) return NULL;
	while(root->left != NULL)
		root = root->left;
	return root;
}
 
treenode* getSuccessor(treenode* A, int B) {
    
    treenode* current = Find(A,B);
	if(current == NULL) return NULL;
	if(current->right != NULL) {  //Case 1: Node has right subtree
		return FindMin(current->right); // O(h)
	}
	else {   //Case 2: No right subtree  - O(h)
		treenode* successor = NULL;
		treenode* ancestor = A;
		while(ancestor != current) {
			if(current->val < ancestor->val) {
				successor = ancestor; // so far this is the deepest node for which current node is in left
				ancestor = ancestor->left;
			}
			else
				ancestor = ancestor->right;
		}
		return successor;
	}
}
