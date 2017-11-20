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
listnode* insertionSortList(listnode* A) {
        	listnode *newhead=NULL,*traversal=A;
	while(traversal!=NULL)
	{
		listnode *current=traversal;
		traversal=traversal->next;
		if(newhead==NULL)
		{
			current->next=NULL;
			newhead=current;
		}
		else
		{
			if(newhead->val>=current->val)
			{
				current->next=newhead;
				newhead=current;
			}
			else
			{
				listnode *newtraversal=newhead,*prev;
				while(newtraversal!=NULL && newtraversal->val<current->val){
					prev=newtraversal;
				newtraversal=newtraversal->next;}
				prev->next=current;
				current->next=newtraversal;
			}
		}
	}
	return newhead;
}
