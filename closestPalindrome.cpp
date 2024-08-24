class Solution {
public:
    string nearestPalindromic(string n) {
        int s = n.size();
        if(s == 1) return to_string(stoi(n)-1);
        vector<long long> palindromes;
        palindromes.push_back(pow(10,s-1)-1);
        palindromes.push_back(pow(10,s)+1);
        long long pre = stoll(n.substr(0,(s+1)/2));
        for(int i=-1;i<=1;++i){
            string p= to_string(pre+i);
            string palindrome = p + string(p.rbegin() + (s%2), p.rend());
            palindromes.push_back(stoll(palindrome));
        }
        long long num = stoll(n);
        long long closest = -1;
        for(long long palin : palindromes){
            if(palin == num) continue;
            if(closest == -1 || abs(palin-num)<abs(closest-num) || (abs(palin-num)== abs(closest -num) && palin<closest)){
                closest = palin;
            }
        }
        return to_string(closest);
    }
};
