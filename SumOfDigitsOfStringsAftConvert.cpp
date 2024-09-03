class Solution {
public:
    int getLucky(string s, int k) {
        int n = s.size();
        string str = "";
        for(int i=0;i<n;i++){
            int c=s[i] - 'a'+1;
            str += to_string(c);
        }
        while(k>0){
            int ans =0;
            for(char c:str){
                ans+= c-'0';
            }
            str = to_string(ans);
            k--;
        }
        
        return stoi(str);
    }
};
