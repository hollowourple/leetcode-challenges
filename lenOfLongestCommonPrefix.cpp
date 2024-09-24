class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        int m=0;
        unordered_set<string> s;
        for(int i:arr1){
            string str= to_string(i);
            for(int l=0;l<=str.size();l++){
                s.insert(str.substr(0,l));
            }
        }
        for(int i:arr2){
            string str = to_string(i);
            for(int l=0;l<=str.size();l++){
                if(s.find(str.substr(0,l))!=s.end()){
                    m = max(m,l);
                }
                else{ break;
                }
            }
        }
        return m;
    }
};
