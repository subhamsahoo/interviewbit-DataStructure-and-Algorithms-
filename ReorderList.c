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
listnode* reorderList(listnode* A) {
    if(A==NULL||A->next==NULL)
    return A;
    	struct ListNode *traversal1=A,*traversal2=A->next,*point,*prev=NULL,*current,*even;
	int e=0;
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
	even=point;
	point=point->next;
	traversal1=A;
	while(point!=NULL)
	{
		if(traversal1==even)
		{
			e=1;
			break;
		}
		struct ListNode *temp1=traversal1->next,*temp2=point->next;
		traversal1->next=point;
		point->next=temp1;
		traversal1=temp1;
		point=temp2;
	}
	if(e==1)
	{
		traversal1->next=point;
	}
	else 
		traversal1->next=NULL;
	return A;
}
