/**
 * Definition for singly-linked random list.
 * struct RandomListNode {
 *     int label;
 *     struct RandomListNode *next;
 *     struct RandomListNode *random;
 * };
 * 
 * typedef struct RandomListNode randomlistnode;
 * 
 */
/**
 * @input A : Head pointer of random linked list 
 * 
 * @Output head pointer of copied random list.
 */
 
 randomlistnode* create(int data)
 {
     randomlistnode* newnode=(randomlistnode*)malloc(sizeof(randomlistnode));
     newnode->label=data;
     newnode->next=NULL;
     newnode->random=NULL;
     return newnode;
 }
 
 
randomlistnode* copyRandomList(randomlistnode* A) {
    if(A==NULL)
    return NULL;
    randomlistnode *traversal=A;
    while(traversal!=NULL)
    {
        randomlistnode* temp=create(traversal->label);
        randomlistnode* prev=traversal;
        traversal=traversal->next;
        prev->next=temp;
        temp->next=traversal;
    }
    
    
    traversal=A;
    while(1)
    {
        randomlistnode* temp=traversal->next;
        if(traversal->random!=NULL)
        temp->random=traversal->random->next;
        else temp->random=NULL;
        if(temp->next==NULL)
        break;
        traversal=traversal->next->next;
    }
    randomlistnode *original=A,*copy=A->next,*head=A->next;
    while(1)
    {
        if(copy->next==NULL)
        {
            original->next=NULL;
            break;
        }
        original->next=copy->next;
        original=original->next;
        copy->next=original->next;
        copy=copy->next;
    }
    return head;
}
