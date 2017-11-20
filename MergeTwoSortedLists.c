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
 
void createlist(struct ListNode **head,int data)
{
	struct ListNode *newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
	newnode->val=data;
	newnode->next=*head;
	*head=newnode;
}

void reverse(struct ListNode** head)
{
    struct ListNode* prev   = NULL;
    struct ListNode* current = *head;
    struct ListNode* next;
    while (current != NULL)
    {
        next  = current->next;  
        current->next = prev;   
        prev = current;
        current = next;
    }
    *head = prev;
}

 
listnode* mergeTwoLists(listnode* A, listnode* B) {
    		listnode *head=NULL,*traversal1=A,*traversal2=B;
		while(traversal1!=NULL&&traversal2!=NULL)
		{
			if(traversal1->val<=traversal2->val)
			{
				createlist(&head,traversal1->val);
				traversal1=traversal1->next;
			}
			else if(traversal1->val>traversal2->val)
			{
				createlist(&head,traversal2->val);
				traversal2=traversal2->next;
			}
		}
		while(traversal1!=NULL&&traversal2==NULL)
		{
			createlist(&head,traversal1->val);
			traversal1=traversal1->next;
		}
		while(traversal2!=NULL&&traversal1==NULL)
		{
			createlist(&head,traversal2->val);
			traversal2=traversal2->next;
		}
		reverse(&head);
		return head;
}
