class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr = head;
        while(curr!=NULL && curr->next!=NULL){
            int g = gcd(curr->val, curr->next->val);
            ListNode* div = new ListNode(g);
            div->next=curr->next;
            curr->next= div;
            curr=div->next;
        }
        return head;
    }
};
