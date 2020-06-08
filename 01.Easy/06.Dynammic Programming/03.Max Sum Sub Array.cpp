class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int cs = nums[0];
        int ms = nums[0];
        for(int i=1;i<n;i++){
            cs = max(nums[i],cs + nums[i]);
            if(ms<cs){
                ms = cs;
            }
        }
        return ms;
    }
};
