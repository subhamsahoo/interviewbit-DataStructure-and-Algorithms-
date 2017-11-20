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
 * @input B : Head pointer of linked list 
 * 
 * @Output head pointer of list.
 */
 
 void reverse(struct ListNode** head_ref)
{
    struct ListNode* prev   = NULL;
    struct ListNode* current = *head_ref;
    struct ListNode* next;
    while (current != NULL)
    {
        next  = current->next;  
        current->next = prev;   
        prev = current;
        current = next;
    }
    *head_ref = prev;
}

 void createlist(struct ListNode **head,int data)
{
	struct ListNode *newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
	newnode->val=data;
	newnode->next=*head;
	*head=newnode;
}


listnode* addTwoNumbers(listnode* A, listnode* B) {
    if(A==NULL&B==NULL)
    return A;
    else if(A==NULL&&B!=NULL)
    return A;
    else if(A!=NULL&&B==NULL)
    return B;
    	struct ListNode *traversal1=A,*traversal2=B,*head3=NULL;
	int carry=0;
	while(traversal1!=NULL&&traversal2!=NULL)
	{
		int add=(traversal1->val)+(traversal2->val)+carry;
		carry=0;
		if(add>9)
		{
			carry=1;
			add=add%10;
		}
		createlist(&head3,add);
		traversal1=traversal1->next;
		traversal2=traversal2->next;
	}
	while(traversal1!=NULL&&traversal2==NULL)
	{
		int add=(traversal1->val)+carry;
		carry=0;
		if(add>9)
		{
			carry=1;
			add=add%10;
		}
		createlist(&head3,add);
		traversal1=traversal1->next;		
	}
	while(traversal2!=NULL&&traversal1==NULL)
	{
		int add=(traversal2->val)+carry;
		carry=0;
		if(add>9)
		{
			carry=1;
			add=add%10;
		}
		createlist(&head3,add);
		traversal2=traversal2->next;		
	}
	if(carry>0)
		createlist(&head3,carry);
	reverse(&head3);
	return head3;
}
