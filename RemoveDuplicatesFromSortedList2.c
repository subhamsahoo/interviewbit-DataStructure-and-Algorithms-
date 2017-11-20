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
    if(A==NULL)
    return A;
    	struct ListNode *new1=NULL,*nt,*traversal=A,*point;
	int found=0;
	while(traversal!=NULL)
	{
		if(traversal->next!=NULL)
		{
			point=traversal->next;
			while(point!=NULL&&point->val==traversal->val)
			{
				found=1;
			struct ListNode *temp=point;
			point=point->next;
			free(temp);
			}
			if(found==1){
				struct ListNode* d=traversal;
				traversal=point;
			found=0;
			free(d);
			}
			else if(found==0)
			{
				if(new1==NULL)
				{
					new1=traversal;
					nt=traversal;
				}
				else
				{
					nt->next=traversal;
					nt=nt->next;
				}
				traversal=traversal->next;
				nt->next=NULL;
			}
		}
		else if(traversal->next==NULL){
			if(new1==NULL)
				new1=traversal;
			else 
			nt->next=traversal;
			traversal=traversal->next;
		}
	}
	return new1;
}
