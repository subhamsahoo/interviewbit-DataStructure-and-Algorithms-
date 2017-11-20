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
listnode* detectCycle(listnode* A) {
    listnode *head=A;
     if (head == NULL)
            return NULL;
       struct ListNode *slower = head;
    struct ListNode *faster = head;
        while (slower != NULL && faster !=NULL){
            slower = slower->next;
            faster = faster->next;
            if (faster != NULL)
                faster = faster->next;
            if (slower == faster)
                break;
        }//while
        if (faster == NULL)
            return NULL;
        slower = head;
        while (slower != faster){
            slower = slower->next;
            faster = faster->next;
        }
        return slower;
}
