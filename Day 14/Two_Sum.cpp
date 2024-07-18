class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> sol;
        for(int i=0; i<nums.size(); i++){
            int num=nums[i];
            int numNeed = target - num;
            if(sol.find(numNeed) != sol.end()){
                return {sol[numNeed], i};
            }
            sol[num]=i;
        }
        return {-1,-1};
    }
};