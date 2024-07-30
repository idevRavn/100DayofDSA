class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
        int n=arr.size();
        int max=arr[0];
        int s_max=-1;
        
        for(int i=1; i<n; i++){
            if(max<arr[i]){
                s_max=max;
                max=arr[i];
            } else if(arr[i]<max && arr[i] > s_max) s_max=arr[i];
        }
        if(max==s_max) return -1;
        return s_max;
    }
};