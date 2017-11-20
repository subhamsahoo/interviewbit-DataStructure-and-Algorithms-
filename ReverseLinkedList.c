/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 * 
 * typedef struct ListNode listnode;
 * 
 * listnode* listnode_new(int val) {
 *     listnode* node = (listnode *) malloc(sizeof(listnode));
 *     node->val = val;
 *     node->next = NULL;
 *     return node;
 * }
 */
/**
 * @input A : Head pointer of linked list 
 * 
 * @Output head pointer of list.
 */
listnode* reverseList(listnode* A) {
    if(A==NULL)
    return A;
    struct ListNode *traversal=A,*current,*prev=NULL;
	while(traversal!=NULL)
	{
		current=traversal;
		traversal=traversal->next;
		current->next=prev;
		prev=current;
	}
	A=current;
	return A;
}
