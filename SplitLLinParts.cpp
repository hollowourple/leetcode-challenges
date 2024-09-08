class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        if(!head) return vector<ListNode*>(k, nullptr);
        int n=0;
        ListNode* temp = head;
        while(temp!=nullptr){
            n++;
            temp=temp->next;
        }
        vector<ListNode*> ans(k, nullptr);
        int split = n/k;
        int extra = n%k;
        ListNode* curr = head;
        for(int i=0;i<k && curr!=nullptr;i++){
            ans[i] = curr;
            int currSize = split;
            if(i<extra){
                currSize++;
            }
            for(int j=0;j<currSize-1 && curr!=nullptr;j++){
                curr = curr->next;
            }

            if(curr){
                ListNode* nextPath = curr->next;
                curr->next = nullptr;
                curr = nextPath;
            }
        }
        return ans;
    }
};
