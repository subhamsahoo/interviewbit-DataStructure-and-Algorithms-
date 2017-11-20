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
listnode* partition(listnode* A, int B) {
    
    	listnode *first=NULL,*second=NULL,*traversal=A,*boundary;
	while(traversal!=NULL)
	{
	    
		if(traversal->val<B)
		{
			if(first==NULL&&second==NULL){
				first=traversal;
				A=first;
			}
			else if(first==NULL&&second!=NULL)
			{
			    listnode *start=traversal,*prev;
			    while(traversal!=NULL&&traversal->val<B)
			    {
			        prev=traversal;
			        traversal=traversal->next;
			    }
				second->next=traversal;
				prev->next=boundary;
				first=prev;
				A=start;
				if(traversal!=NULL&&traversal->val>=B)
				second=traversal;
			}
			else if(first!=NULL&&second==NULL)
				first=traversal;
			else if(first!=NULL&&second!=NULL)
			{
			    listnode *start=traversal,*prev;
			    while(traversal!=NULL&&traversal->val<B)
			    {
			        prev=traversal;
			        traversal=traversal->next;
			    }			    
				second->next=traversal;
				prev->next=first->next;
				first->next=start;
				first=prev;
				if(traversal!=NULL&&traversal->val>=B)
				second=traversal;
			}
		}
	
		else
		{
				if(second==NULL)
					boundary=traversal;
				second=traversal;
		}
		if(traversal!=NULL)
		traversal=traversal->next;
	}
	return A;
}
