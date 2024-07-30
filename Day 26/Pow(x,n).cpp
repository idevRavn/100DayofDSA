class Solution {
public:
    double myPow(double x, int n) {
        double pow=1;
        if(n < 0) {
            x = 1 / x;
        } 
        while(n!=0){
            if((n%2) != 0) pow*=x;
            x*=x;
            n/=2;
        }
        return pow;
    }
};