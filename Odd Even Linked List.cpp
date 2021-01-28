class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
         if(head == NULL || head ->next == NULL)
            return head;
        ListNode *odd = head;
        ListNode *even = head -> next;
        ListNode *oddhead = head;
        ListNode *evenhead = head ->next;
        while(odd -> next && even -> next){
            odd -> next = even -> next;
            odd = odd -> next;
            if(odd->next){
                even -> next = odd -> next;
                even  = even -> next;
            }
        }
        odd -> next = evenhead;;
        even -> next = NULL;
        return oddhead;
    }
};
