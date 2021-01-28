class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
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
        odd -> next = NULL;
        even -> next = NULL;
        ListNode *head1 = new ListNode(0);
        ListNode *curr = head1;
        while(evenhead || oddhead){
            if(evenhead){
                curr -> next = evenhead;
                curr = curr -> next;
                evenhead = evenhead -> next;
            }
             if(oddhead){
                curr -> next = oddhead;
                curr = curr -> next;
                oddhead = oddhead -> next;
            }
        }
        return head1->next;
    }    
};
