class Solution {
public:
    int missingNumber(vector<int>& nums) {
        map<int,int> m;
        for(auto i:nums){
            m[i]++;
        }
        int n = nums.size();
        for(int i=0;i<=n;i++){
            if(m[i]!=1){
                return i;
            }
        }
        return 0;
    }
};
