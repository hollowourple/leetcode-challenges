class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        if(head==NULL) return nullptr;
        unordered_set<int> num;
        for(int i:nums){
            num.insert(i);
        }

        while(head!=NULL && num.find(head->val)!=num.end()){
            head=head->next;
        }
        ListNode* curr = head;
        while(curr!=NULL &&curr->next!=NULL){
            if(num.find(curr->next->val)!=num.end()){
                curr->next = curr->next->next;
            }
            else{
                curr= curr->next;
            }
        }
        return head;
    }
};
