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
 * @input B : Integer
 * 
 * @Output head pointer of list.
 */
listnode* removeNthFromEnd(listnode* A, int B) {
    	struct ListNode *traversal1=A,*traversal2=A,*prev;
	int count=1;
	while(traversal1!=NULL&&count<B+1)
	{
		traversal1=traversal1->next;
		count++;
	}
	if(traversal1==NULL)
	{
		A=traversal2->next;
		free(traversal2);
		//return prev;
	}
	else
	{
	while(traversal1!=NULL)
	{
		prev=traversal2;
		traversal2=traversal2->next;
		traversal1=traversal1->next;
	}
	prev->next=traversal2->next;
	free(traversal2);
	//return A;
	}
	return A;
}
