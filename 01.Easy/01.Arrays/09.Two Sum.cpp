class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        int n = nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]] = i+1;
            cout<<m[nums[i]]<<" ";
        }
        cout<<endl;
        int p;
        int y;
        for(int i=0;i<n;i++){
            int x = target - nums[i];
            if(m[x]!=0){
                y = m[x] - 1;
                p = i;
                if(y!=p)
                    break;
            }
        }
        vector<int> v = {p,y};
        return v;
    }
};
