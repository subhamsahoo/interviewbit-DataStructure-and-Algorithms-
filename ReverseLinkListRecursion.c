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
 listnode* reverse(listnode* A,listnode** head)
 {
     if(A->next==NULL)
     {
         (*head)=A;
         return NULL;
     }
     reverse(A->next,head);
     listnode* q=A->next;
     q->next=A;
     A->next=NULL;
 }
listnode* reverseList(listnode* A) {
    struct node *head=NULL;
    reverse(A,&head);
    return head;
}
