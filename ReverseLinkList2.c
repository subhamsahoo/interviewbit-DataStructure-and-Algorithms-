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
 * @input m : Integer
 * @input n : Integer
 * 
 * @Output head pointer of list.
 */
listnode* reverseBetween(listnode* A, int m, int n) {
    if(A==NULL||m==n)
    return A;
    listnode *traversal=A,*bm=A,*prev=NULL,*current,*am;
	int count=1,start=m,end=n;
	while(count<m)
	{
		bm=traversal;
		traversal=traversal->next;
		count++;
	}
	am=traversal;
	while(start<=end)
	{
		current=traversal;
		traversal=traversal->next;
		current->next=prev;
		prev=current;
		start++;
	}
	if(m==1)
		A=current;
	else
		bm->next=current;
	am->next=traversal;
	return A;
}
