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
listnode* reverseList(listnode* A, int B) {
         listnode* current = A;
    listnode* next = NULL;
    listnode* prev = NULL;
    int count = 0;   
     
    /*reverse first k nodes of the linked list */
    while (current != NULL && count < B)
    {
        next  = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }
     
    if (next !=  NULL)
       A->next = reverseList(next, B); 
 

    return prev;
}
