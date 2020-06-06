class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        unordered_map <int,int> count;
        for(auto i:nums1){
            count[i]++;
        }
        for(auto i:nums2)
        {
            if(count[i]>0){
                count[i]--;
                result.push_back(i);
            }
        }
        return result;
    }
};
