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
listnode* getIntersectionNode(listnode* A, listnode* B) {
    int c1=0,c2=0;
    listnode *temp1=A,*temp2=B;
    while(temp1!=NULL)
    {
        c1++;
        temp1=temp1->next;
    }
    while(temp2!=NULL)
    {
        c2++;
        temp2=temp2->next;
    }
    temp1=A;temp2=B;
    int d=abs(c1-c2);
    if(c1>c2)
    {
        int i;
        for(i=0;i<d;i++)
            temp1=temp1->next;
    }
        if(c2>c1)
    {
        int i;
        for(i=0;i<d;i++)
            temp2=temp2->next;
    }
    while(temp1!=NULL)
    {
        if(temp1==temp2)
        return temp1;
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return NULL;
    
}
