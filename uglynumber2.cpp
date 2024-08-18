class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> ugly(n);
        ugly[0] = 1;
        int a2=0, a3=0, a5=0;

        for(int i=1;i<n;i++){

            int next2 = ugly[a2]*2;
            int next3 = ugly[a3]*3;
            int next5 = ugly[a5]*5;
            ugly[i] = min(next2, min(next3, next5));
            if(ugly[i]==next2) a2++;
            if(ugly[i]==next3) a3++;
            if(ugly[i]==next5) a5++;

        }
        return ugly[n-1];
    }
};
