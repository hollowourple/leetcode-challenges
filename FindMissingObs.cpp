class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m = rolls.size();
        int total = mean*(n+m);
        int sum=0;
        for(int i:rolls){
            sum+=i;
        }
        int missing = total - sum;
        if(missing<n || missing>6*n) return {};
        vector<int> ans(n,1);
        missing -= n;

        for(int i=0;i<n && missing>0; i++){
            int inc = min(5, missing);
            ans[i] += inc;
            missing -= inc;
        }
        return ans;
    }
};
