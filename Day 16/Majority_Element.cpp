class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int num, numCount=0;
        for(int i=0; i<nums.size(); i++){
            if(count == 0){
                count=1;
                num=nums[i];
            } else if(nums[i]==num) count++;
            else count--;
        }

        for(int i=0; i<nums.size(); i++){
            if(nums[i]==num) numCount++;
        }
        if(numCount > nums.size()/2) return num;

        return -1;
    }
};