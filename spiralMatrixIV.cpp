class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> matrix(m,vector<int>(n,-1));
        int t = 0, b = m-1;
        int l = 0, r = n-1;
        ListNode* curr = head;

        while(t<=b && l<=r){
            for(int i=l;i<=r;i++){
                if(curr){
                    matrix[t][i] = curr->val;
                    curr=curr->next;
                }
            }
            t++;
            for(int i=t;i<=b;i++){
                if(curr){
                    matrix[i][r] = curr->val;
                    curr=curr->next;
                }
            }
            r--;
            if(t<=b){
                for(int i=r;i>=l;i--){
                    if(curr){
                        matrix[b][i]=curr->val;
                        curr=curr->next;
                    }
                }
                b--;
            }
            if(l<=r){
                for(int i=b;i>=t;i--){
                    if(curr){
                        matrix[i][l]=curr->val;
                        curr=curr->next;
                    }
                }
                l++;
            }

        }
        return matrix;
    }
};
