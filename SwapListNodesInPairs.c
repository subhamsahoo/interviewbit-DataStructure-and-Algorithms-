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
listnode* swapPairs(listnode* A) {
    if(A==NULL)
    return A;
    listnode *traversal=A,*t1,*t2,*prev;
	if(traversal!=NULL&&traversal->next!=NULL)
	{
		t1=traversal;
		t2=traversal->next;
		t1->next=t2->next;
		traversal=t2->next;
		t2->next=t1;
		A=t2;
		prev=t1;
	}
	while(traversal!=NULL&&traversal->next!=NULL)
	{
		t1=traversal;
		t2=traversal->next;
		t1->next=t2->next;
		traversal=t2->next;
		t2->next=t1;
		prev->next=t2;
		prev=t1;	
	}
	return A;
}
