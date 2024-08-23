class Solution {
public:
    int countSeniors(vector<string>& details) {
        int c=0;
        for(string i:details){
            string ageStr = i.substr(11,2);
            int age = stoi(ageStr);
            if(age>60){
                c++;
            }
        }
        return c;
    }
};
