class Solution {
public:
    int toMins(string time){
        int h = stoi(time.substr(0,2));
        int m = stoi(time.substr(3,2));
        return h*60+m;
    }
    int findMinDifference(vector<string>& timePoints) {
        vector<int> mins;
        for(string s:timePoints){
            mins.push_back(toMins(s));
        }
        sort(mins.begin(),mins.end());

        int minDiff = INT_MAX;
        for(int i=0;i<mins.size()-1;i++){
            minDiff = min(minDiff, mins[i+1]-mins[i]);
        }
        minDiff = min(minDiff, 60*24 - (mins[mins.size()-1]-mins[0]));
        return minDiff;
    }
};
