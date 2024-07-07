class Solution {
public:
    int bitwiseComplement(int n) {
        int num=n;
        int mask=0;

        if(num==0){
            return 1;
        }

        while(num!=0){
            mask = (mask << 1) | 1;
            num=num>>1;
        }
        int sol= (~n) & mask;
        return sol;
    }
};