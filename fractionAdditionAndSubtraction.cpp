class Solution {
public:
    string fractionAddition(string expression) {
        int numer=0, denom=1;
        int i=0, n= expression.size();
        while(i<n){
            int sign = 1;
            if(expression[i] == '+' || expression[i] == '-'){
                if(expression[i] == '-') sign = -1;
                i++;
            }
            int num=0;
            while(i<n && isdigit(expression[i])){
                num = num*10 + (expression[i] - '0');
                i++;
            }
            num *= sign;
            i++;
            int den = 0;
            while(i<n && isdigit(expression[i])){
                den = den*10 + (expression[i] - '0');
                i++;
            }
            numer = numer*den + num*denom;
            denom*=den;
            int gcdVal = gcd(abs(numer), denom);
            numer /= gcdVal;
            denom /= gcdVal;
        }
        return to_string(numer) + "/" + to_string(denom);
    }
};
