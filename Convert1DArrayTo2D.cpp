class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int s= original.size();
        if(m*n!=s){
            return {};
        }
        vector<vector<int>> twoD(m, vector<int>(n));
        for(int i=0;i<s;i++){
            int r = i/n;
            int c = i%n;
            twoD[r][c] = original[i];
        }
        return twoD;
    }
};
