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
listnode* deleteDuplicates(listnode* A) {
    	listnode *traversal=A,*point;
	while(traversal!=NULL)
	{
		if(traversal->next!=NULL)
		{
		point=traversal->next;
		while(point!=NULL&&traversal->val==point->val){
			listnode *temp=point;
			point=point->next;
			free(temp);
		}
		traversal->next=point;
		traversal=point;
		}
		else if(traversal->next==NULL)
			traversal=traversal->next;
	}
	return A;
}
