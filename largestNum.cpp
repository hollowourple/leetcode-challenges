class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> s;
        for(int n:nums){
            s.push_back(to_string(n));
        }
        sort(s.begin(),s.end(), [](string& a, string& b){
            return a+b>b+a;
        });
        if(s[0]=="0") return "0";
        string ans;
        for(string c:s){
            ans+=c;
        }
        return ans;
    }
};
