class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *temp = head;
        int n=0;
        while(temp){
            n++;
            temp = temp -> next;
        }
        if(head==NULL)
            return head;
       k = k%n;
        if(k==0){
        return head;
        }
    
    temp=head;
    
    for(int i=0;i<n-k-1;i++){
        temp=temp->next;
    }
    
    ListNode* newhead=temp->next;
    temp->next=NULL;
    
    temp=newhead;
    
    while(temp->next){
        temp=temp->next;
    }
    
    temp->next=head;    
    return newhead;
    }
};
