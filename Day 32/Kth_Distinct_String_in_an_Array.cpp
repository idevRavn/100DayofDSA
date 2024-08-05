class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> sol;
        for(auto &str: arr) sol[str]++;
        for(auto &str: arr){
            if(sol[str]==1&&--k==0) return str;
        }
        return "";
    }
};