class Solution {
public:
void dfs(int &n, int x, vector<bool>&vis, vector<vector<int>>& stones){
    vis[x]=true;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            if(stones[x][0]==stones[i][0]) dfs(n, i, vis, stones);
            if(stones[x][1]==stones[i][1]) dfs(n, i, vis, stones);
        }
    }
}
    int removeStones(vector<vector<int>>& stones) {
        int n= stones.size();
        int c=0;
        vector<bool>vis(n);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(n, i, vis, stones);
                c += 1;
            }
        }
        return n- c;
    }
};
