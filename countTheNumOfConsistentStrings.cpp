class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> a(allowed.begin(),allowed.end());
        int ans= words.size();
        for(auto word:words){
            for(auto c:word){
                if(a.find(c)==a.end()){
                ans--;
                break;
                }
            }
        }
        return ans;
    }
};
