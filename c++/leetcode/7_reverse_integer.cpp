class Solution {
public:
    int reverse(int x) {
        bool isNegative=false;
        unsigned long long num;
        if(x<0){
            isNegative=true;
            num=-1ull*x;
        }
        else
            num=x;
        unsigned long long ans=0;
        while(num){
            ans=ans*10+num%10;
            num=num/10;
        }
        if(ans > INT_MAX)
            return 0;
        return isNegative? -1*ans: ans;
    }
};

