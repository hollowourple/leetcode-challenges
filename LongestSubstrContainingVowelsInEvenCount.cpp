class Solution {
public:
    int findTheLongestSubstring(string s) {
        unordered_map<int,int>mp;
        int bitmask=0;
        mp[0]=-1;
        int len=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a') bitmask^= (1<<0);
            else if(s[i]=='e') bitmask^= (1<<1);
            else if(s[i]=='i') bitmask^= (1<<2);
            else if(s[i]=='o') bitmask^= (1<<3);
            else if(s[i]=='u') bitmask^= (1<<4);

            if(mp.find(bitmask)!=mp.end()){
                len = max(len, i-mp[bitmask]);
            }
            else{
                mp[bitmask]=i;
            }
        }
        return len;
    }
};
