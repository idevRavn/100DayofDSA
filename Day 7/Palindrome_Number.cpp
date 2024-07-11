class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0||x%10==0&&x!=0) return 0;
        int revNum=0;
        int num=x;
        while(x>0){
            revNum=(revNum*10)+x%10;
            if(revNum>INT_MAX/10) break;
            x/=10;
        }
        return revNum==num?1:0;
    }
};