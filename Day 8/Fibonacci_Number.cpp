class Solution {
public:
    int fib(int n) {
        if(n==0 || n==1) return n;
        int firstNum=0, secondNum=1, thirdNum;
        for(int i=2; i<=n; i++){
            thirdNum=firstNum+secondNum;
            firstNum=secondNum;
            secondNum=thirdNum;
        }
        return thirdNum;
    }
};