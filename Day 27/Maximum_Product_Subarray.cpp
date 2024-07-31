class Solution {
public:
    int maxProduct(vector<int>& nums) {
        double pre=1, suf=1;
        double sol=INT_MIN;
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(pre==0) pre=1;
            if(suf==0) suf=1;
            pre*=nums[i];
            suf*=nums[n-i-1];

            sol=max(sol, max(pre,suf));
        }
        return sol;
    }
};