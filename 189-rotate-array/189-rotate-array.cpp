class Solution {
public:
    void reverse(vector<int>& arr, int start, int end)
    {
        while(start < end)
        {
            swap(arr[start++], arr[end--]);
            
        }
    }
    void rotate(vector<int>& nums, int k) {
        if(nums.size()==1)
            return;
        reverse(nums, 0, nums.size()-1);
        reverse(nums, 0, (k%nums.size())-1);
        reverse(nums, k%nums.size(), nums.size()-1);
        return;
    }
};