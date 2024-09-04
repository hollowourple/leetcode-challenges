class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        vector<pair<int,int>> direc = {{0,1},{1,0},{0,-1},{-1,0},};
        unordered_set<string> obs;
        for(auto& i:obstacles){
            obs.insert(to_string(i[0]) + "," + to_string(i[1]));
        }
        int x=0,y=0,direcIndex=0;
        int maxdist = 0;
        for(int c:commands){
            if(c==-2) {
                direcIndex = (direcIndex+3)%4;
                }
            else if(c==-1) {
                direcIndex = (direcIndex+1)%4;
            }
            else{
            for(int step=0;step<c;step++){
                int nextX = x+direc[direcIndex].first;
                int nextY = y+direc[direcIndex].second;

                if(obs.find(to_string(nextX)+","+to_string(nextY)) == obs.end()){
                    x = nextX;
                    y = nextY;

                    maxdist = max(maxdist, x*x+y*y);
                }
                else{
                    break;
                }
            }
            }
        }
        return maxdist;
    }
};
