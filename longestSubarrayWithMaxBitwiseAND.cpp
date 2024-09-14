class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int m = *max_element(nums.begin(),nums.end());
        int maxLen=0, currLen=0;
        for(int n:nums){
            if(n==m) {currLen++;}
            else{
                maxLen= max(maxLen,currLen);
                currLen=0;
            }
        }
        maxLen= max(maxLen,currLen);

        return maxLen;
    }
};
