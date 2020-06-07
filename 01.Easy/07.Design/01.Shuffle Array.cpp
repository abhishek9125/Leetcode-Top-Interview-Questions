class Solution {
public:
    vector<int> original;
    vector<int> shuffled;
    Solution(vector<int>& nums) {
        original = nums;
        shuffled = nums;
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return original;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        for(int i=0;i<shuffled.size();i++){
            swap(shuffled[i],shuffled[rand()%shuffled.size()]);
        }
        return shuffled;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
