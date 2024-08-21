class Solution {
public:
    int strangePrinter(string s) {
        int n = s.length();
        vector<vector<int>> dp(n, vector<int>(n,0));
        for(int i = 0; i<n;i++){
            dp[i][i]=1;
        }
        for(int i=2; i<=n;i++){
            for(int j=0;j<=n-i;j++){
                int end = j+i-1;
                dp[j][end] = dp[j+1][end]+1;
                for(int k = j+1;k<=end;k++){
                    if(s[k]==s[j]){
                        dp[j][end] = min(dp[j][end], dp[j+1][k-1]+dp[k][end]);
                    }
                }
            }
        }
        return dp[0][n-1];
    }
};
