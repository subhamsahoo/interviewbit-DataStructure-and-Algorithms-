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
listnode* rotateRight(listnode* A, int B) {
        if(B==0)
    return A;
    if(A==NULL)
    return A;
   	struct ListNode *traversal1=A,*traversal2=A,*prev2,*prev1;
	int count=1;
	while(traversal1!=NULL&&count<B+1)
	{
		traversal1=traversal1->next;
		count++;
	   if(traversal1==NULL)
		{
		    B=B%(count-1);
		    if(B==0)
		    return A;
		    traversal1=A;
		    count=1;
		}
	}
	while(traversal1!=NULL)
	{
		prev2=traversal2;
		prev1=traversal1;
		traversal2=traversal2->next;
		traversal1=traversal1->next;
	}
	prev2->next=NULL;
	prev1->next=A;
	A=traversal2;
	return A;
}
