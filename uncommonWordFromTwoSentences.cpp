class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> sent;
        vector<string> ans;
        string temp="";
        for(char s:s1){
            if(s!=' ') temp.push_back(s);
            else{
                sent[temp]++;
                temp="";
            }
        }
        sent[temp]++;
        temp="";

        for(auto& i:sent) if(i.second>1) i.second=0;
        
        for(char s:s2){
            if(s!=' ') temp.push_back(s);
            else{
                if(sent.count(temp)) sent[temp]--;
                else sent[temp]++;
                temp="";
            }
        }
        if(sent.count(temp)) sent[temp]--;
        else sent[temp]++;
        for(auto& i:sent){
            if(i.second==1) ans.push_back(i.first);
        }
        return ans;
    }
};
