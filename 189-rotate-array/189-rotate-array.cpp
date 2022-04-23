class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //Trivial O(N) Space O(N) Time
        vector<int> res(nums.size());
        for(int i = 0;i<nums.size();i++)
        {
            res[(i+k)%nums.size()] = nums[i]; 
        }
        nums = res;
        return;
    }
};