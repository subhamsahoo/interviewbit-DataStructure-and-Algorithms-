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
 * @Output Integer
 */
int lPalin(listnode* A) {
    if(A==NULL||A->next==NULL)
    return 1;
    struct ListNode *traversal1=A,*traversal2=A->next,*point,*prev=NULL,*current;
	while(traversal2!=NULL)
	{
		if(traversal2->next==NULL)
			break;
		traversal2=traversal2->next->next;
		traversal1=traversal1->next;
	}
	point=traversal1;
	traversal1=traversal1->next;
	while(traversal1!=NULL)
	{
		current=traversal1;
		traversal1=traversal1->next;
		current->next=prev;
		prev=current;
	}
	point->next=current;
	point=point->next;
	traversal1=A;
	while(point!=NULL)
	{
	    if(point->val!=traversal1->val)
	    return 0;
	    point=point->next;
	    traversal1=traversal1->next;
	}
	return 1;
}
